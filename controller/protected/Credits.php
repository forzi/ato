<?
namespace stradivari\stradivari_default\controller {
    abstract class protected_Credits extends Main {
		protected static function author($name, $secondaryName, $email) {
            echo self::loadView('author', compact('name', 'secondaryName', 'email'));
		}
    }
}
