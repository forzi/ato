<?
namespace stradivari\stradivari_default\router {
    abstract class Main extends \stradivari\core\AbstractRouter {
        protected static function main__get() {
            echo \stradivari\core\AbstractController::loadView('main');
        }
		/* protected static function main__post() {
			var_dump($_POST);
			d(getallheaders());
		} */
    }
}
