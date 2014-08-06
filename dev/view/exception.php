<? header("content-type: text/plain"); ?>
<?
	$file = $exception->getFile();
	$line = $exception->getLine();
	$content = file_get_contents($file);
	$content = explode("\n", $content);
	array_unshift($content, '');
	$content = array_chunk($content, $line+1, true);
	$content = $content[0];
	$firstLine = $line - $lineCount;
	if ( $firstLine > 1 ) {
		$content = array_chunk($content, $firstLine, true);
		$content = $content[1];
	}
?>
Catch Exception: <?=get_class($exception)?>


with message: <?=$exception->getMessage()?>


in file: <?=$file?> (<?=$line?>)
<?
	foreach ( $content as $strNum => $str ) {
		echo "	{$strNum}: {$str}\n";
	}
?>

Trace:
<?
	foreach ( $exception->getTrace() as $key => $trace ) {
		echo "	#{$key}:\n";
		if ( isset($trace['file']) ) {
			echo "		{$trace['file']} ({$trace['line']}): {$trace['function']}()\n";
		} else {
			echo "		{$trace['class']}{$trace['type']}{$trace['function']}()\n";
		}
		foreach ( $trace['args'] as $num => $arg ) {
			echo "			{$num}: " . str_replace("\n", "", var_export($arg, 1)) . "\n";
		}
		echo "\n";
	}
?>