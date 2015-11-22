<?
namespace forzi\ato\router;

use stradivari\core\Autoloader;
use stradivari\core\App;
use stradivari\data_converter\FileConverter;
use stradivari\data_converter\Converter;
use stradivari\enum\Enum;
use stradivari\date_time\DateTimeExtended as DateTime;

abstract class View extends \stradivari\core\AbstractRouter {
	protected static function main__get() {
		echo \stradivari\core\AbstractController::loadView('main');
	}
	protected static function form__get($id = null) {
		$data = [];
		if ($id) {
			$path = static::__getDataFilePath();
			$contents = new FileConverter($path);
			$solders = $contents->array()->data;
			$data = $solders[$id];
		}
		//var_dump($data['lname']); die();
		echo \stradivari\core\AbstractController::loadView('form', ['solder' => $data]);
	}
	protected static function delete__get($id) {
		$path = static::__getDataFilePath();
		$solders = [];
		if (is_readable($path)) {
			$contents = new FileConverter($path);
			$solders = $contents->array()->data;
		}
		unset($solders[$id]);
		$contents = new Converter($solders, 'array');
		file_put_contents($path, $contents->yaml()->data);
		header('location: /view/list');
	}
	protected static function form__post($id = null) {
		$data = App::$pool['input']['post']['solder'];
		$path = static::__getDataFilePath();
		$solders = [];
		if (is_readable($path)) {
			$contents = new FileConverter($path);
			$solders = $contents->array()->data;
		}
		$id = $id ? $id : 's_' . count($solders);
		$data['id'] = $id;
		$solders[$id] = $data;
		$contents = new Converter($solders, 'array');
		file_put_contents($path, $contents->yaml()->data);
		header('location: /view/list');
	}
	protected static function list__get($type = '') {
		$type = $type ? $type : 'html';
		
		$path = static::__getDataFilePath();
		$solders = [];
		if (is_readable($path)) {
			$contents = new FileConverter($path);
			$solders = $contents->array()->data;
		}
		
		if ($type == 'html' || $type == 'htm') {
			$soldersWrapper = new Enum([
				'entity' => $solders,
				'functions' => [
					'name' => function ($solder) {
						return $solder['lname'] . ' ' . $solder['fname'] . ' ' . $solder['sname'];
					},
					'birth_date' => function ($solder) {
						try {
							$date = new DateTime($solder['birth_date'], 'Y-m-d');
							return $date->format('d.m.Y');
						} catch (\Exception $e) {
							return $solder['birth_date'];
						}
					},
					'unit' => function ($solder) {
						$ordinations = [
							1 => 'ЗСУ',
							2 => 'Національна гвардія',
							3 => 'МВС',
							4 => 'СБУ',
							5 => 'Прикордонна служба',
							6 => 'ДСНС',
							7 => 'ДУК',
							8 => 'Волонтер',
							9 => 'ДСО'
						];
						$ordination = isset($solder['oredination']) ? $solder['oredination'] : 1;
						$unit['ordination'] = $ordinations[$ordination];
						$unit['name'] = isset($solder['unit']['name']) ? $solder['unit']['name'] : '';
						return $unit;
					}
				],
				'keys' => [
					[
						'name' => 'orderList',
						'type' => 'sort',
						'order' => ['name' => 'ASC']
					]
				]
			]);
			$data = ['solders' => $soldersWrapper];
			echo \stradivari\core\AbstractController::loadView('list', $data);
		} else {
			$data = $contents->$type()->data;
			header('Content-type: text/' . $type);
			header('Content-Disposition: attachment; filename=solders.' . $type);
			header('Content-Length: ' . strlen($data));
			echo $data;
		}
		
	}

	private static function __getDataFilePath() {
		return Autoloader::searchFile(App::$pool['settings']['defaultSubDir'] . '/data/data.yaml');
	}
}
