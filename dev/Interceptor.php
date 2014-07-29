<?
namespace stradivari\stradivari_default {
use \stradivari\core\App;
    abstract class Interceptor extends \stradivari\core\AbstractController {
        public static function catchException(\Exception $exception) {
			#throw $exception;
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
            if ( $error['code'] ) {
                header("HTTP/1.1 {$error['code']} {$error['msg']}");
                echo self::loadView('error', $error);
            }
        }
        public static function catchError($errno, $errstr, $errfile = '', $errline = 0, $errcontext = array()) {
            d($errno, 0);
            d($errstr, 0);
            d($errfile, 0);
            d($errline, 0);
            d($errcontext, 0);
            return false;
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
