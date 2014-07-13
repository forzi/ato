<?
namespace stradivari\stradivari_default\controller {
    abstract class Main extends \stradivari\core\AbstractController {
        protected static function main__get() {
            echo self::loadView('main');
        }
    }
}
