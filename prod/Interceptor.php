<?
namespace stradivari\stradivari_default {
use \stradivari\core\App;
    abstract class Interceptor extends AbstractInterceptor {
		public static function loadView($error, $exception) {
			return parent::loadView('error', $error);
		}
    }
}
