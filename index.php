<?
include __DIR__ . '/../../stradivari/core/Autoloader.php';

use \stradivari\core\Autoloader;
use \stradivari\pool\Pool;
use \stradivari\core\App;
use \stradivari\core\Director;

Autoloader::inheritComposer();
Autoloader::register();

$query = parse_url($_SERVER['REQUEST_URI']);
$query = isset($query['query']) ? $query['query'] : '';
$_GET = array();
parse_str($query, $_GET);

#$_SERVER['QUERY_STRING'] = '/' . left_cut($_SERVER['QUERY_STRING'], '/'); // Sometimes some servers doesn't add start slesh

$creator = new Pool();
App::$creator = $creator;

$interceptorHandler = $creator['\stradivari\interceptor\InterceptorHandler']();
$interceptorHandler->error = '\forzi\ato\Interceptor::catchError';
$interceptorHandler->exception = '\forzi\ato\Interceptor::catchException';

Director::$lowerCase = false;

App::$pool['tools']['startMicrotime'] = microtime(true);
App::$pool['settings']['company'] = 'forzi';
App::$pool['settings']['product'] = 'ato';
if ( isset($argv) ) {
	App::$pool['input']['argv'] = $argv;
}
App::execute();
