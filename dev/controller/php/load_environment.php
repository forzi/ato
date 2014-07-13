<?php

$env_file = '/home/user/projects/environment.json';
$env = file_get_contents($env_file);
$env = json_decode($env, 1);

define('ENVIRONMENT', $env['environment']);
