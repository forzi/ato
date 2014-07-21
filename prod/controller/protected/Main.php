<?
namespace stradivari\stradivari_default\controller {
    abstract class protected_Main extends Main {
		protected static function author__get($name, $secondaryName, $email) {
            echo self::loadView('author', compact('name', 'secondaryName', 'email'));
		}
		protected static function php_info__get() {
            phpinfo();
        }
    }
}
