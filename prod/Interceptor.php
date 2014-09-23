<?
namespace stradivari\stradivari_default {
use \stradivari\core\App;
    abstract class Interceptor extends \stradivari\core\AbstractController {
        public static function catchException(\Exception $exception) {
            if ( isset(App::$pool['input']['argv']) ) {
                throw $exception;
            }
            if ( $exception instanceof \stradivari\interfaces\WebException ) {
                $error['code'] = $exception->getCode();
                $error['msg'] = $exception->getMessage();
                foreach ( $exception->headers() as $header ) {
                    header($header);
                }
            } else {
                $error['code'] = 500;
                $error['msg'] = 'Internal Server Error';
            }
            if ( $error['code'] && $error['code'] != 200 ) {
                header("HTTP/1.1 {$error['code']} {$error['msg']}");
                echo self::loadView('error', $error);
            }
        }
        public static function catchError($errno, $errstr, $errfile = '', $errline = 0, $errcontext = array()) {			
			$e = new exception\ErrorException($errstr, $errno, 0, $errfile, $errline);
			if ( $e->isFatal ) {
				self::catchException($e);
				return false;
			}
			throw $e;
		}
        public static function microtimeEvaluator() {
            $oldTime = App::$pool['tools']['startMicrotime'];
            if ( $oldTime === null ) {
                var_dump('not set');
                return false;
            }
            $newTime = microtime(true);
            var_dump( number_format($newTime - $oldTime, 4) );
        }
    }
}
