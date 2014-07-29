<?
include __DIR__ . '/../core/Autoloader.php';

use \stradivari\core\Autoloader;
use \stradivari\pool\Pool;
use \stradivari\core\App;
use \stradivari\core\Director;

Autoloader::inheritComposer();
Autoloader::register();

#$_SERVER['QUERY_STRING'] = '/' . left_cut($_SERVER['QUERY_STRING'], '/'); // Sometimes some servers doesn't add start slesh

$creator = new Pool();
App::$creator = $creator;

$interceptorHandler = $creator['\stradivari\interceptor\InterceptorHandler']();
$interceptorHandler->error = '\stradivari\stradivari_default\Interceptor::catchError';
$interceptorHandler->exception = '\stradivari\stradivari_default\Interceptor::catchException';
# $interceptorHandler->session = null; // null | SessionHandlerInterface (null - default Session Handler, ordinarily 'files')
# $interceptorHandler->shutdown['microtimeEvaluator'] = '\stradivari\stradivari_default\Interceptor::microtimeEvaluator';
# $interceptorHandler->shutdown['microtimeEvaluator'] = null; // unset handler
# $interceptorHandler->shutdown = null; // unset all handlers
# $interceptorHandler->shutdown->registred(); // array of names of handlers, which registered and wasn't unset
# $interceptorHandler->shutdown->everRegistred(); // array of names of all handlers, which ever registered
# $interceptorHandler->tick; // works for tick hanlers equal to 'shutdown'
# declare(ticks = 1);
# $interceptorHandler->tick['microtimeEvaluator'] = '\stradivari\stradivari_default\Interceptor::microtimeEvaluator';

Director::$lowerCase = false;

App::$pool['tools']['startMicrotime'] = microtime(true);
App::$pool['settings']['company'] = 'stradivari';
App::$pool['settings']['product'] = 'stradivari_default';
#App::$pool['settings']['sessionName'] = 'sSid'; (by default), if [null | false | ''] - no auto start session
#App::$pool['settings']['defaultSubDir'] = App::$pool['settings']['company'] . '/' . App::$pool['settings']['product']; (by default)
#App::$pool['settings']['redirectQueryFile'] = Autoloader::searchFile(App::$pool['settings']['defaultSubDir'] . '/redirect_query.yaml'); (by default)
#App::$pool['settings']['redirectUriFile'] = Autoloader::searchFile(App::$pool['settings']['defaultSubDir'] . '/route_query.yaml'); (by default)
#App::$pool['settings']['redirectUriFile'] = Autoloader::searchFile(App::$pool['settings']['defaultSubDir'] . '/redirect_uri.yaml'); (by default)
#App::$pool['settings']['routeUriFile'] = Autoloader::searchFile(App::$pool['settings']['defaultSubDir'] . '/route_uri.yaml'); (by default)
#App::$pool['settings']['defaultNamespace'] = '\\' . App::$pool['settings']['company'] . '\\' . App::$pool['settings']['product']; (by default)
#App::$pool['settings']['modelNamespace'] = App::$pool['settings']['defaultNamespace'] . '\model'; (by default)
#App::$pool['settings']['viewNamespace'] = $defaultSettings['defaultNamespace'] . '\view'; (by default)
#App::$pool['settings']['controllerNamespace'] = App::$pool['settings']['defaultNamespace'] . '\router'; (by default)
if ( isset($argv) ) {
	App::$pool['input']['argv'] = $argv;
}
App::execute();
