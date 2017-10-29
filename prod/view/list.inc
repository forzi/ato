<!DOCTYPE html>
<html lang="en">
	<head>
		<meta charset="utf-8">
		<meta http-equiv="X-UA-Compatible" content="IE=edge">
		<meta name="viewport" content="width=device-width, initial-scale=1">
		<title>База даних жертв АТО</title>

		<link href="/source/bootstrap/css/bootstrap.css" rel="stylesheet">
		
		<script src="/source/js/jquery/jquery-2.1.3.min.js"></script>
		<script src="/source/bootstrap/js/bootstrap.min.js"></script>
		
	</head>
	<body>
	<div class="container-fluid highlight">
	<div class="well well-lg">
		<div class="form-group">
			<label class="col-sm-1">Номер</label>
			<label class="col-sm-3">П.І.Б.</label>
			<label class="col-sm-2">Дата народження</label>
			<label class="col-sm-3">Підрозділ</label>
			<a class="btn btn-success glyphicon glyphicon-plus-sign" href='/view/form/' type="button"></a>
			<div class="btn-group">
				<button
					class="btn btn-primary glyphicon glyphicon-floppy-disk dropdown-toggle"
					href='/view/form/'
					type="button"
					data-toggle="dropdown"
					aria-haspopup="true"
					aria-expanded="false">
				</button>
				<ul class="dropdown-menu">
					<li><a href="/view/list.yaml">yaml</a></li>
					<li><a href="/view/list.json">json</a></li>
				</ul>
			</div>
            <a class="btn btn-primary glyphicon glyphicon-search" href='/view/search/' type="button"></a>
		</div>
		<? foreach ($solders as $key => $solder) { ?>
		<div class="form-group">
			<span class="col-sm-1"><?=$key + 1?></span>
			<span class="col-sm-3"><?=$solder['name']?></span>
			<span class="col-sm-2"><?=$solder['birth_date']?></span>
			<span class="col-sm-3"><?=$solder['unit']['ordination'] . ' ' . $solder['unit']['name']?></span>
			<a class="btn btn-success glyphicon glyphicon-pencil" href='/view/form/<?=$solder['id']?>/' type="button"></a>
			<a
				class="btn btn-danger glyphicon glyphicon-minus-sign"
				href='/view/delete/<?=$solder['id']?>/'
				type="button"
				onclick='return confirm("Ви дійсно бажаєте видалити\n <?=$solder['id']?>: <?=$solder['name']?>");'></a>
		</div>
		<? } ?>
	</div>
	</div>
  </body>
</html>
