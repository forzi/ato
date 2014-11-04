<?
namespace stradivari\stradivari_default\router {
    abstract class protected_Render extends \stradivari\core\AbstractRouter {
        protected static function main__get() {
            self::abstractRender(\stradivari\core\App::$pool['input']['get']);
        }
        protected static function main__post() {
            self::abstractRender(\stradivari\core\App::$pool['input']['post']);
        }
		protected static function сache__get($fileName) {
			$creator = \stradivari\core\App::$creator;
			$params = array('file_name' => $fileName);
			self::abstractRender($params);
		}
		private static function abstractRender($params) {
            $creator = \stradivari\core\App::$creator;
            $render = $creator['\stradivari\render\Render__AxWrapper']();
            $render->phantomPath = \stradivari\core\Autoloader::searchFile('/arya/phantomjs_stradivari_fork/bin/phantomjs');
			d($render->getContent($params));
        }
    }
}
