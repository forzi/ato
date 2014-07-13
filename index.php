<?
include __DIR__ . '/../core/Autoloader.php';

use \stradivari\core\Autoloader;
use \stradivari\pool\Pool;
use \stradivari\core\App;

Autoloader::inheritComposer();
Autoloader::register();

$creator = new Pool();
App::$creator = $creator;

$interceptorHandler = $creator['\stradivari\interceptor\InterceptorHandler']();
$interceptorHandler['error'] = '\stradivari\stradivari_default\Interceptor::catchError';
$interceptorHandler['exception'] = '\stradivari\stradivari_default\Interceptor::catchException';
$interceptorHandler['session'] = null; // null | SessionHandlerInterface (null - default Session Handler, ordinarily 'files')
$interceptorHandler['shutdown']['microtimeEvaluator'] = '\stradivari\stradivari_default\Interceptor::microtimeEvaluator';
# $interceptorHandler['shutdown']['microtimeEvaluator'] = null; // unset handler
# $interceptorHandler['shutdown'] = null; // unset all handlers
# $interceptorHandler->shutdown->registred(); // array of names of handlers, which registered and wasn't unset
# $interceptorHandler->shutdown->everRegistred(); // array of names of all handlers, which ever registered
# $interceptorHandler['tick']; // works for tick hanlers equal to 'shutdown'
# declare(ticks = 1);
# $interceptorHandler['tick']['microtimeEvaluator'] = '\stradivari\stradivari_default\Interceptor::microtimeEvaluator';

App::$pool['tools']['startMicrotime'] = microtime(true);
App::$pool['settings']['company'] = 'stradivari';
App::$pool['settings']['product'] = 'stradivari_default';
#App::$pool['settings']['sessionName'] = 'sSid'; (by default), if [null | false | ''] - no auto start session
#App::$pool['settings']['defaultSubDir'] = App::$pool['settings']['company'] . '/' . App::$pool['settings']['product']; (by default)
#App::$pool['settings']['redirectorRulesFile'] = Autoloader::searchFile(App::$pool['settings']['defaultSubDir'] . '/redirector_rules.yaml'); (by default)
#App::$pool['settings']['routerRulesFile'] = Autoloader::searchFile(App::$pool['settings']['defaultSubDir'] . '/router_rules.yaml'); (by default)
#App::$pool['settings']['defaultNamespace'] = '\\' . App::$pool['settings']['company'] . '\\' . App::$pool['settings']['product']; (by default)
#App::$pool['settings']['modelNamespace'] = App::$pool['settings']['defaultNamespace'] . '\model'; (by default)
#App::$pool['settings']['viewNamespace'] = $defaultSettings['defaultNamespace'] . '\view'; (by default)
#App::$pool['settings']['controllerNamespace'] = App::$pool['settings']['defaultNamespace'] . '\controller'; (by default)
if ( isset($argv) ) {
	App::$pool['input']['argv'] = $argv;
}
App::execute();
