<?php

define('ROOT', __DIR__);

require_once 'php/load_environment.php';
require_once 'php/environments/' . ENVIRONMENT . '/config.php';
require_once 'php/parse_get_params.php';
require_once 'php/Render.php';

$type = isset($_REQUEST['type']) ? $_REQUEST['type'] : 'pdf';
$no_cache = isset($_REQUEST['no_cache']) ? $_REQUEST['no_cache'] : false;

if ( isset($_GET['url']) ) {
	$params = array(
		'url' => urldecode($_GET['url']),
		'parameters' => array(
			'paperSize' => array(
				'format' => isset($_GET['format']) ? $_GET['format'] : 'A4',
				'orientation' => isset($_GET['orientation']) ? $_GET['orientation'] : 'portrait'
			),
            'zoomFactor' => 0.92
		),
	);
	$params = json_encode($params);
} else if ( isset($_POST['params']) ) {
	$params = $_POST['params'];
	if ( !json_decode($params, 1) ) {
		$params = json_decode("\"{$params}\"", 1); //magic
	}
} else {
	$params = null;
}

if ( !$params || !is_string($params) || !$type || !is_string($type) ) {
	header('HTTP/1.0 400 Bad Request');
	echo 'ERROR: bad params!';
	return;
}

Render::$is_cache = !$no_cache;
Render::$timeout = TIMEOUT;
if ( !Render::throw_render($type, $params) ) {
	if ( Render::$return_var == 199 ) {
		header('HTTP/1.0 400 Bad Request');
		echo 'ERROR: ' . Render::$return_var . "\n" . '<br />';
		echo Render::$error;
	} else {
		header('HTTP/1.0 500 Internal Server Error');
		echo 'ERROR: ' . Render::$return_var . "\n";
		echo Render::$error;
	}
}
