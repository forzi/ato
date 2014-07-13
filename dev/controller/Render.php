<?
namespace stradivari\stradivari_default\controller {
    abstract class Render extends \stradivari\core\AbstractController {
        protected static function main__get() {
            self::abstractRender(\stradivari\core\App::$pool['input']['get']);
        }
        protected static function main__post() {
            self::abstractRender(\stradivari\core\App::$pool['input']['post']);
        }
        private static function abstractRender($params) {
            d($params);
            $creator = \stradivari\core\App::$creator;
            $render = $creator['\stradivari\render\Render']($params);
        }
    }
}
