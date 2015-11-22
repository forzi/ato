<?
namespace forzi\ato\exception {
    class ErrorException extends \ErrorException {
		protected $type = '';
		protected $isFatal = false;
		
		public function __construct($message = '', $code = 0, $severity = 0, $filename = __FILE__, $lineno = __LINE__, $previous = NULL) {
			if ( $message instanceof \ErrorException ) {
				$e = $message;
				$message = $e->message;
				$code = $e->code;
				$severity = $e->severity;
				$filename = $e->file;
				$lineno = $e->line;
				$previous = $e;
			}
			$fatalErrorTypes = array(E_ERROR, E_PARSE, E_COMPILE_ERROR, E_CORE_ERROR);
			$errorTypes = array(
				E_ALL				=>		'E_ALL',
				E_COMPILE_ERROR		=>		'E_COMPILE_ERROR',
				E_COMPILE_WARNING	=>		'E_COMPILE_WARNING',
				E_CORE_ERROR		=>		'E_CORE_ERROR',
				E_CORE_WARNING		=>		'E_CORE_WARNING',
				E_DEPRECATED		=>		'E_DEPRECATED',
				E_ERROR				=>		'E_ERROR',
				E_NOTICE			=>		'E_NOTICE',
				E_PARSE				=>		'E_PARSE',
				E_RECOVERABLE_ERROR	=>		'E_RECOVERABLE_ERROR',
				E_STRICT			=>		'E_STRICT',
				E_USER_DEPRECATED	=>		'E_USER_DEPRECATED',
				E_USER_ERROR		=>		'E_USER_ERROR',
				E_USER_NOTICE		=>		'E_USER_NOTICE',
				E_USER_WARNING		=>		'E_USER_WARNING',
				E_WARNING			=>		'E_WARNING'
			);
			if (array_key_exists($code, $errorTypes) ) {
				$this->type = $errorTypes[$code];
			} else {
				$this->type = 'E_ALL';
			}
			$this->isFatal = in_array($code, $fatalErrorTypes);
			parent::__construct($message, $code, $severity, $filename, $lineno, $previous);
		}
		public function getType() {
			return $this->type;
		}
		public function __get($name) {
			if ( $name == 'isFatal' ) {
				return $this->isFatal;
			}
			if ( $name == 'type' ) {
				return $this->type;
			}
			return parent::__get($name);
		}
	}
}
