<?php

$uri = $_SERVER['REQUEST_URI'];
$parse_uri = parse_url($_SERVER['REQUEST_URI']);
if ( isset($parse_uri['query']) ) {
	$_GET = array();
	$get = explode('&', $parse_uri['query']);
	foreach ( $get as $attr ) {
		$attr = explode('=', $attr);
		$_GET[$attr[0]] = isset($attr[1]) ? $attr[1] : null;
	}
}

$_REQUEST += $_GET;
