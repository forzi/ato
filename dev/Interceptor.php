<?
namespace stradivari\stradivari_default {
    abstract class Interceptor {
        public static function catchException(\Exception $exception) {
            echo '<pre>';
            throw $exception;
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
            $oldTime = \stradivari\core\App::$pool['tools']['startMicrotime'];
            if ( $oldTime === null ) {
                var_dump('not set');
                return false;
            }
            $newTime = microtime(true);
            var_dump( number_format($newTime - $oldTime, 4) );
        }
    }
}
