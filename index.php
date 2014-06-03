<?
include __DIR__ . '/../core/Autoloader.php';
use \stradivari\core\Autoloader;
use \stradivari\core\App;
use \stradivari\core\Redirector;
use \stradivari\core\Router;
use \stradivari\core\AbstractController as Controller;

Autoloader::inheritComposer();
Autoloader::register();

#Redirector::$defaultRulesFile = Autoloader::searchFile('user/project/redirector_rules.yaml');
#Router::$defaultRulesFile = Autoloader::searchFile('user/project/router_rules.yaml');
#Router::$controllerNamespace = '\\user\\project\\router';
#Controller::$viewNamespace = '\\user\\project\\view';
#App::$exceptionInterseptor = '\\stradivari\\stradivari_default\\ExceptionInterceptor::execute';

App::$pool = new \stradivari\pool\Pool();
if ( isset($argv) ) {
	App::$input['argv'] = $argv;
}
App::execute();
