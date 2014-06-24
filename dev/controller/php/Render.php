<?php

class Render {
	public static $return_var;
	public static $error;
	public static $timeout;
    public static $is_cache = true;
    private static $loc_files = array();
	
	public static function throw_render($type, $params) {
		$hash = sha1($type . $params);
		$file_name = ROOT . "/render/{$hash}.{$type}";
		$lock_file_name = ROOT . "/tmp/{$hash}.loc";
		if ( !self::lock_file($lock_file_name, true) ) {
			return false;
		}
		if ( file_exists($file_name) && self::$is_cache ) {
			$result = file_get_contents($file_name);
		} else {
			$result = self::_render($type, $params);
		}
		self::unlock_file($lock_file_name);
		if ( $result === false ) {
			return false;
		}
		self::throw_file(array('filename' => "{$hash}.{$type}"), $result);
		return true;
	}
	
	protected static function _render($type, $params) {
		$hash = sha1($type . $params);
		$params_file_name = ROOT . "/tmp/{$hash}.inf";
		file_put_contents($params_file_name, $params);

		$render_filename = ROOT . '/js/render.js';
		$command = PHANTOM_JS . " --ignore-ssl-errors=true {$render_filename} {$type} {$params_file_name} " . self::$timeout * 1000;
		
		#header('HTTP/1.0 500 Internal Server Error'); var_dump(self::$is_cache); die();
		
		$last_str = exec($command, $response, self::$return_var);
        unlink($params_file_name);
        
        $log_content = $command . "\n" . implode("\n", $response);
        file_put_contents(ROOT . "/render/{$hash}.log", $log_content);
        
		if ( self::$return_var ) {
			self::$error = $log_content;
			return false;
		}
        
		$result_filename = $last_str;
		$result = file_get_contents($result_filename);

        if ( !self::$is_cache ) {
            unlink($result_filename);
            unlink(ROOT . "/render/{$hash}.log");
        }
        
        return $result;
	}
	
	protected static function lock_file($file_name, $wait = false) {
        $loc_file = @fopen($file_name, 'c');
        if ( !$loc_file ) {
			self::$error = 'Can\'t create lock file!';
			return false;
		}
        if ( $wait ) {
			$lock = @flock($loc_file, LOCK_EX);
		} else {
			$lock = @flock($loc_file, LOCK_EX | LOCK_NB);
		}
		if ( $lock ) {
			fprintf($loc_file, "%s\n", getmypid());
			self::$loc_files[$file_name] = $loc_file;
			return true;
		} else {
			self::$error = 'Can\'t lock file!';
			return false;
		}
    }
    
    protected static function unlock_file($file_name) {
		fclose(self::$loc_files[$file_name]);
		unset(self::$loc_files[$file_name]);
		@unlink($file_name);
	}
	
	protected static function throw_file(array $extra = array(), $data = '') {
		if ( empty($extra['mime_type']) ) {
			$extra['mime_type'] = 'application/octet-stream';
		}
		
		if ( empty($extra['filename']) ) {
			$extra['filename'] = time();
		}
		$extra['filename'] = str_replace(' ', '_', $extra['filename']);
		
		if ( empty($extra['length']) ) {
			$extra['length'] = strlen($data);
		}
		
		header('Content-Type: ' . $extra['mime_type']);
		header('Accept-Ranges: bytes');
		header('Transfer-Encoding: binary');
		header('Content-Length: ' . $extra['length']);
		header('Content-Disposition: inline; filename=' . $extra['filename']);
		header('Connection: close');
		
		$not_modified = false;
		
		$extra['no_cache'] = !empty($extra['no_cache']) || !empty($extra['last_modified']) || !empty($extra['e_tag']);
		
		if ( $extra['no_cache'] ) {
			header('Cache-Control: private, max-age=' . $this->config->item('cache_max_age'));
		} else {
			header('Cache-Control:: no-store, no-cache, must-revalidate');
			header('Expires: now');
		}
		
		if ( !empty($extra['last_modified']) ) {
			header('Last-Modified: ' . $extra['last_modified']);
			$modifier = $this->input->get_request_header('If-Modified-Since');
			if ( $modifier == $extra['last_modified'] ) {
				header ('HTTP/1.1 304 Not Modified');
				$not_modified = true;
			}
		}
		
		if ( !empty($extra['e_tag']) ) {
			header('ETag: ' . $extra['e_tag']);
			$modifier = $this->input->get_request_header('If-None-Match');
			if ( $modifier == $extra['e_tag'] ) {
				header ('HTTP/1.1 304 Not Modified');
				$not_modified = true;
			}
		}
		
		if ( $not_modified ) {
			return;
		}
		
		echo $data;
	}
	
}
