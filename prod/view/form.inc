<!DOCTYPE html>
<html lang="en">
	<head>
		<meta charset="utf-8">
		<meta http-equiv="X-UA-Compatible" content="IE=edge">
		<meta name="viewport" content="width=device-width, initial-scale=1">
		<title>База даних жертв АТО</title>

		<link href="/source/bootstrap/css/bootstrap.css" rel="stylesheet">
		
		<script src="/source/js/jquery/jquery-2.1.3.min.js" type="application/javascript"></script>
		<script src="/source/bootstrap/js/bootstrap.min.js" type="application/javascript"></script>
		<script src="/source/js/form.js" type="application/javascript"></script>
		
	</head>
	<body>
		<div class="container-fluid highlight">
		<div class="well well-lg">
			<form class='form-horizontal' action='' method='post'>
				<? include(__DIR__ . '/form_solder_info.inc'); ?>
				<? include(__DIR__ . '/form_solder_legal_place.inc'); ?>
				<? include(__DIR__ . '/form_solder_fact_place.inc'); ?>
				<? include(__DIR__ . '/form_solder_id.inc'); ?>
				<? include(__DIR__ . '/form_solder_combatant.inc'); ?>
				<? include(__DIR__ . '/form_solder_mobilisation_info.inc'); ?>
				<? include(__DIR__ . '/form_solder_units.inc'); ?>
				<? include(__DIR__ . '/form_solder_ranks.inc'); ?>
				<? include(__DIR__ . '/form_solder_injuries.inc'); ?>
				<? include(__DIR__ . '/form_solder_death.inc'); ?>
				<? include(__DIR__ . '/form_solder_awards.inc'); ?>
				<? include(__DIR__ . '/form_solder_family.inc'); ?>
				
				
				
				
				
				
				
				
				<div class="form-group">
					<label for="Cancel" class="col-sm-3"></label>
					<button class="btn btn-success col-sm-1" type="submit">Підтвердити</button>
					<label for="Cancel" class="col-sm-3"></label>
					<a href='/view/list/' class="btn btn-danger col-sm-1">Відмінити</a>
				</div>
			</form>
			
			<? include(__DIR__ . '/form_solder_units_tpl.inc'); ?>
			<? include(__DIR__ . '/form_solder_awards_tpl.inc'); ?>
			<? include(__DIR__ . '/form_solder_family_tpl.inc'); ?>
            <? include(__DIR__ . '/form_solder_ranks_tpl.inc'); ?>
            <? include(__DIR__ . '/form_solder_injuries_tpl.inc'); ?>
		</div>
		</div>
	</body>
</html>