<?
namespace stradivari\stradivari_default\router {
    abstract class protected_Main extends \stradivari\core\AbstractRouter {
		protected static function author__get($name, $secondaryName, $email) {
            echo \stradivari\core\AbstractController::loadView('author', compact('name', 'secondaryName', 'email'));
		}
		protected static function php_info__get() {
            phpinfo();
        }
		protected static function lowerCaseRedirect($uri) {
			\stradivari\core\Redirector::redirect(strtolower($uri));
		}
    }
}
