<?php

define('ROOT', __DIR__);

require_once 'php/load_environment.php';
require_once 'php/environments/' . ENVIRONMENT . '/config.php';
require_once 'php/Curl_Adapter.php';

function test_render()
{
    $content = file_get_contents('test/body.htm');
    $type = 'pdf';

    $curl_lib = new Curl_Adapter();

    $params = array(
        'body' => base64_encode(file_get_contents('test/body.htm')),
        'footer' => array(
            'main' => base64_encode(file_get_contents('test/footer.htm')),
        ),
        'resources' => array(
            'default_mpdf.css' => base64_encode(file_get_contents('test/default_mpdf.css')),
            'document_pdf.css' => base64_encode(file_get_contents('test/document_pdf.css')),
            'fonts.css' => base64_encode(file_get_contents('test/fonts.css')),
            'logo.jpg' => base64_encode(file_get_contents('test/logo.jpg'))
        ),
        'parameters' => array(
            'viewportSize' => array(
                'height' => 800,
                'width' => 600,
            ),
            'paperSize' => array(
                'format' => 'A4',
                'orientation' => 'portrait'
            )
       ),
    );
    $params = json_encode($params);
    $curl_params = array(
        'url' => RENDER_SERVER,
        'headers' => array(),
        'options' => array(
            'type' => $type,
            'params' => $params
        ),
        'timeout' => 60
    );
    $result = $curl_lib->post($curl_params);

	if ( isset($result['response']) && isset($result['response']['status_code']) ) {
		if ( $result['response']['status_code'] == 200 ) {
			throw_file(array('filename' => '1.' . $type), $result['response']['body']);
			return;
		} else if ( isset($result['response']['body']) ) {
			echo $result['response']['body'];
		}
	}
	echo '<pre>';
	var_dump($result);
	die();
    
}

function throw_file(array $extra = array(), $data = '')
{
	if ( empty($extra['mime_type']) )
	{
		$extra['mime_type'] = 'application/octet-stream';
	}

	if ( empty($extra['filename']) )
	{
		$extra['filename'] = time();
	}
	$extra['filename'] = str_replace(' ', '_', $extra['filename']);

	if ( empty($extra['length']) )
	{
		$extra['length'] = strlen($data);
	}

	header('Content-Type: ' . $extra['mime_type']);
	header('Accept-Ranges: bytes');
	header('Transfer-Encoding: binary');
	header('Content-Length: ' . $extra['length']);
	header('Content-Disposition: inline; filename=' . $extra['filename']);
	header('Connection: close');
	header('Cache-Control:: no-store, no-cache, must-revalidate');
	header('Expires: now');
	
	echo $data;
}

test_render();
