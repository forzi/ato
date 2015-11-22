<?
namespace forzi\ato {
use \stradivari\core\App;
    abstract class Interceptor extends AbstractInterceptor {
		public static function loadView($exception, array $arguments = array()) {
			return parent::loadView('exception', array('exception' => $exception, 'lineCount' => self::$exceptionLineCount));
		}
    }
}
