<?
include __DIR__ . '/../core/Autoloader.php';
use \stradivari\core\Autoloader;
use \stradivari\core\App;
use \stradivari\core\Redirector;
use \stradivari\core\Router;
use \stradivari\core\AbstractController as Controller;

Autoloader::inheritComposer();
Autoloader::register();

#Redirector::$defaultRulesFile = Autoloader::searchFile('user/project/rules.yaml');
#Router::$controllerNamespace = '\\user\\project\\router';
#Controller::$viewNamespace = '\\user\\project\\view';

Redirector::$defaultRulesFile = Autoloader::searchFile('strdivari/core/rules.yaml');
Router::$controllerNamespace = '\\stradivari\\stradivari_default\\controller';
Controller::$viewNamespace = '\\stradivari\\stradivari_default\\view';

App::$pool = new \stradivari\pool\Pool();
if ( isset($argv) ) {
	App::$input['argv'] = $argv;
}
App::execute();
