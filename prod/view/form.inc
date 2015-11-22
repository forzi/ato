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
		<script src="/source/js/form.js"></script>
		
	</head>
	<body>
		<div class="container-fluid highlight">
		<div class="well well-lg">
			<form class='form-horizontal' action='' method='post'>
				<label>Загальна інформація про персону</label>
				<div class="well well-lg">
					<div class="form-group">
					
						<label for="solder_lname" class="col-sm-1">Прізвище</label>
						<div class="col-sm-3">
							<input type="text" class="form-control" id="solder_lname" name="solder[lname]" value='<?=isset($solder['lname']) ? $solder['lname'] : ''?>' />
						</div>
						
						<label for="solder_fname"  class="col-sm-1">Ім`я</label>
						<div class="col-sm-3">
							<input type="text" class="form-control" id="solder_fname" name="solder[fname]" value='<?=isset($solder['sname']) ? $solder['fname'] : ''?>' />
						</div>
						
						<label for="solder_sname"  class="col-sm-1">По Батькові</label>
						<div class="col-sm-3">
							<input type="text" class="form-control" id="solder_sname" name="solder[sname]" value='<?=isset($solder['sname']) ? $solder['sname'] : ''?>' />
						</div>
					</div>
					<div class="form-group">
						<label for="solder_birth_date" class="col-sm-1">Дата народження</label>
						<div class="col-sm-3">
							<input type="date" class="form-control" id="solder_birth_date" name="solder[birth_date]" value='<?=isset($solder['birth_date']) ? $solder['birth_date'] : ''?>' />
						</div>
						
						<label for="solder_inn" class="col-sm-1">ІПН</label>
						<div class="col-sm-3">
							<input type="text" class="form-control" id="solder_inn" name="solder[inn]" value='<?=isset($solder['inn']) ? $solder['inn'] : ''?>' />
						</div>
						
					</div>
					<div class="form-group">
						<label for="solder_passport" class="col-sm-1">Номер паспорта</label>
						<div class="col-sm-3">
							<input type="text" class="form-control" id="solder_passport" name="solder[passport][number]" value='<?=isset($solder['passport']['number']) ? $solder['passport']['number'] : ''?>' />
						</div>
					
						<label for="solder_passport_date" class="col-sm-1">Дата видачі</label>
						<div class="col-sm-3">
							<input type="date" class="form-control" id="solder_passport_date" name="solder[passport][date]" value='<?=isset($solder['passport']['date']) ? $solder['passport']['date'] : ''?>' />
						</div>
						<label for="solder_passport_place" class="col-sm-1">Ким виданий</label>
						<div class="col-sm-3">
							<textarea class="form-control" id="solder_passport_place" name="solder[passport][place]" value='<?=isset($solder['passport']['place']) ? $solder['passport']['place'] : ''?>'><?=isset($solder['passport']['place']) ? $solder['passport']['place'] : ''?></textarea>
						</div>
					</div>
					<div class="form-group">
						<label for="solder_tel1" class="col-sm-1">Тел1.</label>
						<div class="col-sm-3">
							<input type="tel" class="form-control" id="solder_tel1" name="solder[tel][1]" value='<?=isset($solder['tel'][1]) ? $solder['tel'][1] : ''?>' />
						</div>
						
						<label for="solder_tel2" class="col-sm-1">Тел2.</label>
						<div class="col-sm-3">
							<input type="tel" class="form-control" id="solder_tel2" name="solder[tel][2]" value='<?=isset($solder['tel'][2]) ? $solder['tel'][2] : ''?>' />
						</div>
						
						<label for="solder_tel3" class="col-sm-1">Тел3.</label>
						<div class="col-sm-3">
							<input type="tel" class="form-control" id="solder_tel3" name="solder[tel][3]" value='<?=isset($solder['tel'][3]) ? $solder['tel'][3] : ''?>' />
						</div>
					</div>
				</div>
				
				<label>Місце реєстрації</label>
				<div class="well well-lg">
					<div class="form-group">
						<label for="solder_legal_place_index" class="col-sm-1">Індекс</label>
						<div class="col-sm-2">
							<input type="text" class="form-control" id="solder_legal_place_index" name="solder[legal_place][index]" value='<?=isset($solder['legal_place']['index']) ? $solder['legal_place']['index'] : ''?>' />
						</div>
					
						<select class="form-control col-sm-2" id="solder_legal_place_region" name="solder[legal_place][region]">
							<option value='1' <?=isset($solder['legal_place']['region']) && $solder['legal_place']['region'] == 1 ? 'selected' : ''?> >Вінницька обл.</option>
							<option value='2' <?=isset($solder['legal_place']['region']) && $solder['legal_place']['region'] == 2 ? 'selected' : ''?> >Волинська обл.</option>
							<option value='3' <?=isset($solder['legal_place']['region']) && $solder['legal_place']['region'] == 3 ? 'selected' : ''?> >Дніпропетровська обл.</option>
							<option value='4' <?=isset($solder['legal_place']['region']) && $solder['legal_place']['region'] == 4 ? 'selected' : ''?> >Донецька обл.</option>
							<option value='5' <?=isset($solder['legal_place']['region']) && $solder['legal_place']['region'] == 5 ? 'selected' : ''?> >Житомирська обл.</option>
							<option value='6' <?=isset($solder['legal_place']['region']) && $solder['legal_place']['region'] == 6 ? 'selected' : ''?> >Закарпатська обл.</option>
							<option value='7' <?=isset($solder['legal_place']['region']) && $solder['legal_place']['region'] == 7 ? 'selected' : ''?> >Запорізька обл.</option>
							<option value='8' <?=isset($solder['legal_place']['region']) && $solder['legal_place']['region'] == 8 ? 'selected' : ''?> >Івано-Франківська обл.</option>
							<option value='9' <?=isset($solder['legal_place']['region']) && $solder['legal_place']['region'] == 9 ? 'selected' : ''?> >Київська обл.</option>
							<option value='10' <?=isset($solder['legal_place']['region']) && $solder['legal_place']['region'] == 10 ? 'selected' : ''?> >Кіровоградська обл.</option>
							<option value='11' <?=isset($solder['legal_place']['region']) && $solder['legal_place']['region'] == 11 ? 'selected' : ''?> >Луганська обл.</option>
							<option value='12' <?=isset($solder['legal_place']['region']) && $solder['legal_place']['region'] == 12 ? 'selected' : ''?> >Львівська обл.</option>
							<option value='13' <?=isset($solder['legal_place']['region']) && $solder['legal_place']['region'] == 13 ? 'selected' : ''?> >Миколаївська обл.</option>
							<option value='14' <?=isset($solder['legal_place']['region']) && $solder['legal_place']['region'] == 14 ? 'selected' : ''?> >Одеська обл.</option>
							<option value='15' <?=isset($solder['legal_place']['region']) && $solder['legal_place']['region'] == 15 ? 'selected' : ''?> >Полтавська обл.</option>
							<option value='16' <?=isset($solder['legal_place']['region']) && $solder['legal_place']['region'] == 16 ? 'selected' : ''?> >Рівненська обл.</option>
							<option value='17' <?=isset($solder['legal_place']['region']) && $solder['legal_place']['region'] == 17 ? 'selected' : ''?> >Сумська обл.</option>
							<option value='18' <?=isset($solder['legal_place']['region']) && $solder['legal_place']['region'] == 18 ? 'selected' : ''?> >Тернопільська обл.</option>
							<option value='19' <?=isset($solder['legal_place']['region']) && $solder['legal_place']['region'] == 19 ? 'selected' : ''?> >Харківська обл.</option>
							<option value='20' <?=isset($solder['legal_place']['region']) && $solder['legal_place']['region'] == 20 ? 'selected' : ''?> >Херсонська обл.</option>
							<option value='21' <?=isset($solder['legal_place']['region']) && $solder['legal_place']['region'] == 21 ? 'selected' : ''?> >Хмельницька обл.</option>
							<option value='22' <?=isset($solder['legal_place']['region']) && $solder['legal_place']['region'] == 22 ? 'selected' : ''?> >Черкаська обл.</option>
							<option value='23' <?=isset($solder['legal_place']['region']) && $solder['legal_place']['region'] == 23 ? 'selected' : ''?> >Чернівецька обл.</option>
							<option value='24' <?=isset($solder['legal_place']['region']) && $solder['legal_place']['region'] == 24 ? 'selected' : ''?> >Чернігівська обл.</option>
							<option value='25' <?=isset($solder['legal_place']['region']) && $solder['legal_place']['region'] == 25 ? 'selected' : ''?> >АР Крим</option>
						</select>
					
						<select class="form-control col-sm-1" id="solder_legal_place_settlement_type" name="solder[legal_place][settlement_type]">
							<option value='1' <?=isset($solder['legal_place']['settlement_type']) && $solder['legal_place']['settlement_type'] == 1 ? 'selected' : ''?> >місто</option>
							<option value='2' <?=isset($solder['legal_place']['settlement_type']) && $solder['legal_place']['settlement_type'] == 2 ? 'selected' : ''?> >містечко</option>
							<option value='3' <?=isset($solder['legal_place']['settlement_type']) && $solder['legal_place']['settlement_type'] == 3 ? 'selected' : ''?> >городище</option>
							<option value='4' <?=isset($solder['legal_place']['settlement_type']) && $solder['legal_place']['settlement_type'] == 4 ? 'selected' : ''?> >смт</option>
							<option value='5' <?=isset($solder['legal_place']['settlement_type']) && $solder['legal_place']['settlement_type'] == 5 ? 'selected' : ''?> >село</option>
							<option value='6' <?=isset($solder['legal_place']['settlement_type']) && $solder['legal_place']['settlement_type'] == 6 ? 'selected' : ''?> >селище</option>
							<option value='7' <?=isset($solder['legal_place']['settlement_type']) && $solder['legal_place']['settlement_type'] == 7 ? 'selected' : ''?> >станиця</option>
							<option value='8' <?=isset($solder['legal_place']['settlement_type']) && $solder['legal_place']['settlement_type'] == 8 ? 'selected' : ''?> >хутір</option>
						</select>
						<input type="text" class="form-control col-sm-2" id="solder_legal_place_settlement" name="solder[legal_place][settlement]" value='<?=isset($solder['legal_place']['settlement']) ? $solder['legal_place']['settlement'] : ''?>' />
							
						<select class="form-control col-sm-1" id="solder_legal_place_street_type" name="solder[legal_place][street_type]" value='<?=isset($solder['legal_place']['street_type']) ? $solder['legal_place']['street_type'] : ''?>' >
							<option value='1' <?=isset($solder['legal_place']['street_type']) && $solder['legal_place']['street_type'] == 1 ? 'selected' : ''?> >бульв.</option>
							<option value='2' <?=!isset($solder['legal_place']['street_type']) || $solder['legal_place']['street_type'] == 2 ? 'selected' : ''?> >вул.</option>
							<option value='3' <?=isset($solder['legal_place']['street_type']) && $solder['legal_place']['street_type'] == 3 ? 'selected' : ''?> >просп.</option>
							<option value='4' <?=isset($solder['legal_place']['street_type']) && $solder['legal_place']['street_type'] == 4 ? 'selected' : ''?> >туп.</option>
							<option value='5' <?=isset($solder['legal_place']['street_type']) && $solder['legal_place']['street_type'] == 5 ? 'selected' : ''?> >наб.</option>
							<option value='6' <?=isset($solder['legal_place']['street_type']) && $solder['legal_place']['street_type'] == 6 ? 'selected' : ''?> >узвіз</option>
						</select>
						<input type="text" class="form-control col-sm-3" id="solder_legal_place_street" name="solder[legal_place][street]" value='<?=isset($solder['legal_place']['street']) ? $solder['legal_place']['street'] : ''?>' />
					</div>
					<div class="form-group">
						<label for="solder_legal_place_number" class="col-sm-1">буд.</label>
						<div class="col-sm-3">
							<input type="text" class="form-control" id="solder_legal_place_number" name="solder[legal_place][number]" value='<?=isset($solder['legal_place']['number']) ? $solder['legal_place']['number'] : ''?>' />
						</div>
						
						<label for="solder_legal_place_corps" class="col-sm-1">корп.</label>
						<div class="col-sm-3">
							<input type="text" class="form-control" id="solder_legal_place_corps" name="solder[legal_place][corps]" value='<?=isset($solder['legal_place']['corps']) ? $solder['legal_place']['corps'] : ''?>' />
						</div>
						
						<label for="solder_legal_place_apartment" class="col-sm-1">кв.</label>
						<div class="col-sm-3">
							<input type="text" class="form-control" id="solder_legal_place_apartment" name="solder[legal_place][apartment]" value='<?=isset($solder['legal_place']['apartment']) ? $solder['legal_place']['apartment'] : ''?>' />
						</div>
						
					</div>
				</div>
				
				<label>Місце проживання</label>
				<div class="well well-lg">
					<div class="form-group">
						<label for="solder_fact_place_index" class="col-sm-1">Індекс</label>
						<div class="col-sm-2">
							<input type="text" class="form-control" id="solder_fact_place_index" name="solder[fact_place][index]" value='<?=isset($solder['fact_place']['index']) ? $solder['fact_place']['index'] : ''?>' />
						</div>
					
						<select class="form-control col-sm-2" id="solder_fact_place_region" name="solder[fact_place][region]">
							<option value='1' <?=isset($solder['fact_place']['region']) && $solder['fact_place']['region'] == 1 ? 'selected' : ''?> >Вінницька обл.</option>
							<option value='2' <?=isset($solder['fact_place']['region']) && $solder['fact_place']['region'] == 2 ? 'selected' : ''?> >Волинська обл.</option>
							<option value='3' <?=isset($solder['fact_place']['region']) && $solder['fact_place']['region'] == 3 ? 'selected' : ''?> >Дніпропетровська обл.</option>
							<option value='4' <?=isset($solder['fact_place']['region']) && $solder['fact_place']['region'] == 4 ? 'selected' : ''?> >Донецька обл.</option>
							<option value='5' <?=isset($solder['fact_place']['region']) && $solder['fact_place']['region'] == 5 ? 'selected' : ''?> >Житомирська обл.</option>
							<option value='6' <?=isset($solder['fact_place']['region']) && $solder['fact_place']['region'] == 6 ? 'selected' : ''?> >Закарпатська обл.</option>
							<option value='7' <?=isset($solder['fact_place']['region']) && $solder['fact_place']['region'] == 7 ? 'selected' : ''?> >Запорізька обл.</option>
							<option value='8' <?=isset($solder['fact_place']['region']) && $solder['fact_place']['region'] == 8 ? 'selected' : ''?> >Івано-Франківська обл.</option>
							<option value='9' <?=isset($solder['fact_place']['region']) && $solder['fact_place']['region'] == 9 ? 'selected' : ''?> >Київська обл.</option>
							<option value='10' <?=isset($solder['fact_place']['region']) && $solder['fact_place']['region'] == 10 ? 'selected' : ''?> >Кіровоградська обл.</option>
							<option value='11' <?=isset($solder['fact_place']['region']) && $solder['fact_place']['region'] == 11 ? 'selected' : ''?> >Луганська обл.</option>
							<option value='12' <?=isset($solder['fact_place']['region']) && $solder['fact_place']['region'] == 12 ? 'selected' : ''?> >Львівська обл.</option>
							<option value='13' <?=isset($solder['fact_place']['region']) && $solder['fact_place']['region'] == 13 ? 'selected' : ''?> >Миколаївська обл.</option>
							<option value='14' <?=isset($solder['fact_place']['region']) && $solder['fact_place']['region'] == 14 ? 'selected' : ''?> >Одеська обл.</option>
							<option value='15' <?=isset($solder['fact_place']['region']) && $solder['fact_place']['region'] == 15 ? 'selected' : ''?> >Полтавська обл.</option>
							<option value='16' <?=isset($solder['fact_place']['region']) && $solder['fact_place']['region'] == 16 ? 'selected' : ''?> >Рівненська обл.</option>
							<option value='17' <?=isset($solder['fact_place']['region']) && $solder['fact_place']['region'] == 17 ? 'selected' : ''?> >Сумська обл.</option>
							<option value='18' <?=isset($solder['fact_place']['region']) && $solder['fact_place']['region'] == 18 ? 'selected' : ''?> >Тернопільська обл.</option>
							<option value='19' <?=isset($solder['fact_place']['region']) && $solder['fact_place']['region'] == 19 ? 'selected' : ''?> >Харківська обл.</option>
							<option value='20' <?=isset($solder['fact_place']['region']) && $solder['fact_place']['region'] == 20 ? 'selected' : ''?> >Херсонська обл.</option>
							<option value='21' <?=isset($solder['fact_place']['region']) && $solder['fact_place']['region'] == 21 ? 'selected' : ''?> >Хмельницька обл.</option>
							<option value='22' <?=isset($solder['fact_place']['region']) && $solder['fact_place']['region'] == 22 ? 'selected' : ''?> >Черкаська обл.</option>
							<option value='23' <?=isset($solder['fact_place']['region']) && $solder['fact_place']['region'] == 23 ? 'selected' : ''?> >Чернівецька обл.</option>
							<option value='24' <?=isset($solder['fact_place']['region']) && $solder['fact_place']['region'] == 24 ? 'selected' : ''?> >Чернігівська обл.</option>
							<option value='25' <?=isset($solder['fact_place']['region']) && $solder['fact_place']['region'] == 25 ? 'selected' : ''?> >АР Крим</option>
						</select>
					
						<select class="form-control col-sm-1" id="solder_fact_place_settlement_type" name="solder[fact_place][settlement_type]">
							<option value='1' <?=isset($solder['fact_place']['settlement_type']) && $solder['fact_place']['settlement_type'] == 1 ? 'selected' : ''?> >місто</option>
							<option value='2' <?=isset($solder['fact_place']['settlement_type']) && $solder['fact_place']['settlement_type'] == 2 ? 'selected' : ''?> >містечко</option>
							<option value='3' <?=isset($solder['fact_place']['settlement_type']) && $solder['fact_place']['settlement_type'] == 3 ? 'selected' : ''?> >городище</option>
							<option value='4' <?=isset($solder['fact_place']['settlement_type']) && $solder['fact_place']['settlement_type'] == 4 ? 'selected' : ''?> >смт</option>
							<option value='5' <?=isset($solder['fact_place']['settlement_type']) && $solder['fact_place']['settlement_type'] == 5 ? 'selected' : ''?> >село</option>
							<option value='6' <?=isset($solder['fact_place']['settlement_type']) && $solder['fact_place']['settlement_type'] == 6 ? 'selected' : ''?> >селище</option>
							<option value='7' <?=isset($solder['fact_place']['settlement_type']) && $solder['fact_place']['settlement_type'] == 7 ? 'selected' : ''?> >станиця</option>
							<option value='8' <?=isset($solder['fact_place']['settlement_type']) && $solder['fact_place']['settlement_type'] == 8 ? 'selected' : ''?> >хутір</option>
						</select>
						<input type="text" class="form-control col-sm-2" id="solder_fact_place_settlement" name="solder[fact_place][settlement]" value='<?=isset($solder['fact_place']['settlement']) ? $solder['fact_place']['settlement'] : ''?>' />
							
						<select class="form-control col-sm-1" id="solder_fact_place_street_type" name="solder[fact_place][street_type]" value='<?=isset($solder['fact_place']['street_type']) ? $solder['fact_place']['street_type'] : ''?>' >
							<option value='1' <?=isset($solder['fact_place']['street_type']) && $solder['fact_place']['street_type'] == 1 ? 'selected' : ''?> >бульв.</option>
							<option value='2' <?=!isset($solder['fact_place']['street_type']) || $solder['fact_place']['street_type'] == 2 ? 'selected' : ''?> >вул.</option>
							<option value='3' <?=isset($solder['fact_place']['street_type']) && $solder['fact_place']['street_type'] == 3 ? 'selected' : ''?> >просп.</option>
							<option value='4' <?=isset($solder['fact_place']['street_type']) && $solder['fact_place']['street_type'] == 4 ? 'selected' : ''?> >туп.</option>
							<option value='5' <?=isset($solder['fact_place']['street_type']) && $solder['fact_place']['street_type'] == 5 ? 'selected' : ''?> >наб.</option>
							<option value='6' <?=isset($solder['fact_place']['street_type']) && $solder['fact_place']['street_type'] == 6 ? 'selected' : ''?> >узвіз</option>
						</select>
						<input type="text" class="form-control col-sm-3" id="solder_fact_place_street" name="solder[fact_place][street]" value='<?=isset($solder['fact_place']['street']) ? $solder['fact_place']['street'] : ''?>' />
					</div>
					<div class="form-group">
						<label for="solder_fact_place_number" class="col-sm-1">буд.</label>
						<div class="col-sm-3">
							<input type="text" class="form-control" id="solder_fact_place_number" name="solder[fact_place][number]" value='<?=isset($solder['fact_place']['number']) ? $solder['fact_place']['number'] : ''?>' />
						</div>
						
						<label for="solder_fact_place_corps" class="col-sm-1">корп.</label>
						<div class="col-sm-3">
							<input type="text" class="form-control" id="solder_fact_place_corps" name="solder[fact_place][corps]" value='<?=isset($solder['fact_place']['corps']) ? $solder['fact_place']['corps'] : ''?>' />
						</div>
						
						<label for="solder_fact_place_apartment" class="col-sm-1">кв.</label>
						<div class="col-sm-3">
							<input type="text" class="form-control" id="solder_fact_place_apartment" name="solder[fact_place][apartment]" value='<?=isset($solder['fact_place']['apartment']) ? $solder['fact_place']['apartment'] : ''?>' />
						</div>
						
					</div>
				</div>
				
				<label>Інформація про мобілізацію</label>
				<div class="well well-lg">
					<div class="form-group">
						<label for="solder_mobilisation_date" class="col-sm-1">Дата мобілізації</label>
						<div class="col-sm-2">
							<input type="date" class="form-control" id="solder_mobilisation_date" name="solder[mobilisation_date]" value='<?=isset($solder['mobilisation_date']) ? $solder['mobilisation_date'] : ''?>' />
						</div>
					
						<label for="solder_demobilisation_date" class="col-sm-1">Дата демобілізації</label>
						<div class="col-sm-2">
							<input type="date" class="form-control" id="solder_demobilisation_date" name="solder[demobilisation_date]" value='<?=isset($solder['demobilisation_date']) ? $solder['demobilisation_date'] : ''?>' />
						</div>
					</div>
					<div class="form-group">
						<label for="solder_mobilisation_region" class="col-sm-1">Місце призову</label>
						<select class="form-control col-sm-2" id="solder_mobilisation_region" name="solder[mobilisation][region]">
							<option value='1' <?=isset($solder['mobilisation']['region']) && $solder['mobilisation']['region'] == 1 ? 'selected' : ''?> >Вінницька обл.</option>
							<option value='2' <?=isset($solder['mobilisation']['region']) && $solder['mobilisation']['region'] == 2 ? 'selected' : ''?> >Волинська обл.</option>
							<option value='3' <?=isset($solder['mobilisation']['region']) && $solder['mobilisation']['region'] == 3 ? 'selected' : ''?> >Дніпропетровська обл.</option>
							<option value='4' <?=isset($solder['mobilisation']['region']) && $solder['mobilisation']['region'] == 4 ? 'selected' : ''?> >Донецька обл.</option>
							<option value='5' <?=isset($solder['mobilisation']['region']) && $solder['mobilisation']['region'] == 5 ? 'selected' : ''?> >Житомирська обл.</option>
							<option value='6' <?=isset($solder['mobilisation']['region']) && $solder['mobilisation']['region'] == 6 ? 'selected' : ''?> >Закарпатська обл.</option>
							<option value='7' <?=isset($solder['mobilisation']['region']) && $solder['mobilisation']['region'] == 7 ? 'selected' : ''?> >Запорізька обл.</option>
							<option value='8' <?=isset($solder['mobilisation']['region']) && $solder['mobilisation']['region'] == 8 ? 'selected' : ''?> >Івано-Франківська обл.</option>
							<option value='9' <?=isset($solder['mobilisation']['region']) && $solder['mobilisation']['region'] == 9 ? 'selected' : ''?> >Київська обл.</option>
							<option value='10' <?=isset($solder['mobilisation']['region']) && $solder['mobilisation']['region'] == 10 ? 'selected' : ''?> >Кіровоградська обл.</option>
							<option value='11' <?=isset($solder['mobilisation']['region']) && $solder['mobilisation']['region'] == 11 ? 'selected' : ''?> >Луганська обл.</option>
							<option value='12' <?=isset($solder['mobilisation']['region']) && $solder['mobilisation']['region'] == 12 ? 'selected' : ''?> >Львівська обл.</option>
							<option value='13' <?=isset($solder['mobilisation']['region']) && $solder['mobilisation']['region'] == 13 ? 'selected' : ''?> >Миколаївська обл.</option>
							<option value='14' <?=isset($solder['mobilisation']['region']) && $solder['mobilisation']['region'] == 14 ? 'selected' : ''?> >Одеська обл.</option>
							<option value='15' <?=isset($solder['mobilisation']['region']) && $solder['mobilisation']['region'] == 15 ? 'selected' : ''?> >Полтавська обл.</option>
							<option value='16' <?=isset($solder['mobilisation']['region']) && $solder['mobilisation']['region'] == 16 ? 'selected' : ''?> >Рівненська обл.</option>
							<option value='17' <?=isset($solder['mobilisation']['region']) && $solder['mobilisation']['region'] == 17 ? 'selected' : ''?> >Сумська обл.</option>
							<option value='18' <?=isset($solder['mobilisation']['region']) && $solder['mobilisation']['region'] == 18 ? 'selected' : ''?> >Тернопільська обл.</option>
							<option value='19' <?=isset($solder['mobilisation']['region']) && $solder['mobilisation']['region'] == 19 ? 'selected' : ''?> >Харківська обл.</option>
							<option value='20' <?=isset($solder['mobilisation']['region']) && $solder['mobilisation']['region'] == 20 ? 'selected' : ''?> >Херсонська обл.</option>
							<option value='21' <?=isset($solder['mobilisation']['region']) && $solder['mobilisation']['region'] == 21 ? 'selected' : ''?> >Хмельницька обл.</option>
							<option value='22' <?=isset($solder['mobilisation']['region']) && $solder['mobilisation']['region'] == 22 ? 'selected' : ''?> >Черкаська обл.</option>
							<option value='23' <?=isset($solder['mobilisation']['region']) && $solder['mobilisation']['region'] == 23 ? 'selected' : ''?> >Чернівецька обл.</option>
							<option value='24' <?=isset($solder['mobilisation']['region']) && $solder['mobilisation']['region'] == 24 ? 'selected' : ''?> >Чернігівська обл.</option>
							<option value='25' <?=isset($solder['mobilisation']['region']) && $solder['mobilisation']['region'] == 25 ? 'selected' : ''?> >АР Крим</option>
						</select>
						<select class="form-control col-sm-1" id="solder_mobilisation_place_settlement_type" name="solder[mobilisation_place][settlement_type]">
							<option value='1' <?=isset($solder['mobilisation_place']['settlement_type']) && $solder['mobilisation_place']['settlement_type'] == 1 ? 'selected' : ''?> >місто</option>
							<option value='2' <?=isset($solder['mobilisation_place']['settlement_type']) && $solder['mobilisation_place']['settlement_type'] == 2 ? 'selected' : ''?> >містечко</option>
							<option value='3' <?=isset($solder['mobilisation_place']['settlement_type']) && $solder['mobilisation_place']['settlement_type'] == 3 ? 'selected' : ''?> >городище</option>
							<option value='4' <?=isset($solder['mobilisation_place']['settlement_type']) && $solder['mobilisation_place']['settlement_type'] == 4 ? 'selected' : ''?> >смт</option>
							<option value='5' <?=isset($solder['mobilisation_place']['settlement_type']) && $solder['mobilisation_place']['settlement_type'] == 5 ? 'selected' : ''?> >село</option>
							<option value='6' <?=isset($solder['mobilisation_place']['settlement_type']) && $solder['mobilisation_place']['settlement_type'] == 6 ? 'selected' : ''?> >селище</option>
							<option value='7' <?=isset($solder['mobilisation_place']['settlement_type']) && $solder['mobilisation_place']['settlement_type'] == 7 ? 'selected' : ''?> >станиця</option>
							<option value='8' <?=isset($solder['mobilisation_place']['settlement_type']) && $solder['mobilisation_place']['settlement_type'] == 8 ? 'selected' : ''?> >хутір</option>
						</select>
						<input type="text" class="form-control col-sm-2" id="solder_mobilisation_place_settlement" name="solder[mobilisation_place][settlement]" value='<?=isset($solder['mobilisation_place']['settlement']) ? $solder['mobilisation_place']['settlement'] : ''?>' />
						<label for="solder_mobilisation_place" class="col-sm-1">Назва</label>
						<input type="text" class="form-control col-sm-3" id="solder_mobilisation_place" name="solder[mobilisation_place][place]" value='<?=isset($solder['mobilisation_place']['place']) ? $solder['mobilisation_place']['place'] : ''?>' />
					</div>
					<div class="form-group">
						<label for="solder_unit_ordination" class="col-sm-1">Підрозділ</label>
						<select class="form-control col-sm-1" id="solder_unit_ordination" name="solder[unit][ordination]">
							<option value='1' <?=isset($solder['unit']['ordination']) && $solder['unit']['ordination'] == 1 ? 'selected' : ''?> >ЗСУ</option>
							<option value='2' <?=isset($solder['unit']['ordination']) && $solder['unit']['ordination'] == 2 ? 'selected' : ''?> >Національна гвардія</option>
							<option value='3' <?=isset($solder['unit']['ordination']) && $solder['unit']['ordination'] == 3 ? 'selected' : ''?> >МВС</option>
							<option value='4' <?=isset($solder['unit']['ordination']) && $solder['unit']['ordination'] == 4 ? 'selected' : ''?> >СБУ</option>
							<option value='5' <?=isset($solder['unit']['ordination']) && $solder['unit']['ordination'] == 5 ? 'selected' : ''?> >Прикордонна служба</option>
							<option value='6' <?=isset($solder['unit']['ordination']) && $solder['unit']['ordination'] == 6 ? 'selected' : ''?> >ДСНС</option>
							<option value='7' <?=isset($solder['unit']['ordination']) && $solder['unit']['ordination'] == 7 ? 'selected' : ''?> >ДУК</option>
							<option value='8' <?=isset($solder['unit']['ordination']) && $solder['unit']['ordination'] == 8 ? 'selected' : ''?> >Волонтер</option>
						</select>
						<input placeholder="Назва" type="text" class="form-control col-sm-3" id="solder_unit_name" name="solder[unit][name]" value='<?=isset($solder['unit']['name']) ? $solder['unit']['name'] : ''?>' />
						
						<label for="solder_callsign" class="col-sm-1"></label>
						<label for="solder_callsign" class="col-sm-1">Позивний</label>
						<input type="text" class="form-control col-sm-3" id="solder_callsign" name="solder[callsign]" value='<?=isset($solder['callsign']) ? $solder['callsign'] : ''?>' />
					</div>
				</div>
				
				<label>Інформація про смерть</label>
				<div class="well well-lg">
					<div class="form-group">
						<label for="solder_death_date" class="col-sm-1">Дата смерті</label>
						<input type="date" class="form-control col-sm-3" id="solder_death_date" name="solder[death_date]" value='<?=isset($solder['death_date']) ? $solder['death_date'] : ''?>' />
						
						<label for="solder_diagnosis" class="col-sm-2">Причина смерті (діагноз)</label>
						<input type="text" class="form-control col-sm-5" id="solder_diagnosis" name="solder[diagnosis]" value='<?=isset($solder['diagnosis']) ? $solder['diagnosis'] : ''?>' />
					</div>
					<div class="form-group">
						<label for="solder_death_date" class="col-sm-1">Місце поховання</label>
						<select class="form-control col-sm-2" id="solder_grave_region" name="solder[grave][region]">
							<option value='1' <?=isset($solder['grave']['region']) && $solder['grave']['region'] == 1 ? 'selected' : ''?> >Вінницька обл.</option>
							<option value='2' <?=isset($solder['grave']['region']) && $solder['grave']['region'] == 2 ? 'selected' : ''?> >Волинська обл.</option>
							<option value='3' <?=isset($solder['grave']['region']) && $solder['grave']['region'] == 3 ? 'selected' : ''?> >Дніпропетровська обл.</option>
							<option value='4' <?=isset($solder['grave']['region']) && $solder['grave']['region'] == 4 ? 'selected' : ''?> >Донецька обл.</option>
							<option value='5' <?=isset($solder['grave']['region']) && $solder['grave']['region'] == 5 ? 'selected' : ''?> >Житомирська обл.</option>
							<option value='6' <?=isset($solder['grave']['region']) && $solder['grave']['region'] == 6 ? 'selected' : ''?> >Закарпатська обл.</option>
							<option value='7' <?=isset($solder['grave']['region']) && $solder['grave']['region'] == 7 ? 'selected' : ''?> >Запорізька обл.</option>
							<option value='8' <?=isset($solder['grave']['region']) && $solder['grave']['region'] == 8 ? 'selected' : ''?> >Івано-Франківська обл.</option>
							<option value='9' <?=isset($solder['grave']['region']) && $solder['grave']['region'] == 9 ? 'selected' : ''?> >Київська обл.</option>
							<option value='10' <?=isset($solder['grave']['region']) && $solder['grave']['region'] == 10 ? 'selected' : ''?> >Кіровоградська обл.</option>
							<option value='11' <?=isset($solder['grave']['region']) && $solder['grave']['region'] == 11 ? 'selected' : ''?> >Луганська обл.</option>
							<option value='12' <?=isset($solder['grave']['region']) && $solder['grave']['region'] == 12 ? 'selected' : ''?> >Львівська обл.</option>
							<option value='13' <?=isset($solder['grave']['region']) && $solder['grave']['region'] == 13 ? 'selected' : ''?> >Миколаївська обл.</option>
							<option value='14' <?=isset($solder['grave']['region']) && $solder['grave']['region'] == 14 ? 'selected' : ''?> >Одеська обл.</option>
							<option value='15' <?=isset($solder['grave']['region']) && $solder['grave']['region'] == 15 ? 'selected' : ''?> >Полтавська обл.</option>
							<option value='16' <?=isset($solder['grave']['region']) && $solder['grave']['region'] == 16 ? 'selected' : ''?> >Рівненська обл.</option>
							<option value='17' <?=isset($solder['grave']['region']) && $solder['grave']['region'] == 17 ? 'selected' : ''?> >Сумська обл.</option>
							<option value='18' <?=isset($solder['grave']['region']) && $solder['grave']['region'] == 18 ? 'selected' : ''?> >Тернопільська обл.</option>
							<option value='19' <?=isset($solder['grave']['region']) && $solder['grave']['region'] == 19 ? 'selected' : ''?> >Харківська обл.</option>
							<option value='20' <?=isset($solder['grave']['region']) && $solder['grave']['region'] == 20 ? 'selected' : ''?> >Херсонська обл.</option>
							<option value='21' <?=isset($solder['grave']['region']) && $solder['grave']['region'] == 21 ? 'selected' : ''?> >Хмельницька обл.</option>
							<option value='22' <?=isset($solder['grave']['region']) && $solder['grave']['region'] == 22 ? 'selected' : ''?> >Черкаська обл.</option>
							<option value='23' <?=isset($solder['grave']['region']) && $solder['grave']['region'] == 23 ? 'selected' : ''?> >Чернівецька обл.</option>
							<option value='24' <?=isset($solder['grave']['region']) && $solder['grave']['region'] == 24 ? 'selected' : ''?> >Чернігівська обл.</option>
							<option value='25' <?=isset($solder['grave']['region']) && $solder['grave']['region'] == 25 ? 'selected' : ''?> >АР Крим</option>
						</select>
						<select class="form-control col-sm-1" id="solder_grave_settlement_type" name="solder[grave][settlement_type]">
							<option value='1' <?=isset($solder['grave']['settlement_type']) && $solder['grave']['settlement_type'] == 1 ? 'selected' : ''?> >місто</option>
							<option value='2' <?=isset($solder['grave']['settlement_type']) && $solder['grave']['settlement_type'] == 2 ? 'selected' : ''?> >містечко</option>
							<option value='3' <?=isset($solder['grave']['settlement_type']) && $solder['grave']['settlement_type'] == 3 ? 'selected' : ''?> >городище</option>
							<option value='4' <?=isset($solder['grave']['settlement_type']) && $solder['grave']['settlement_type'] == 4 ? 'selected' : ''?> >смт</option>
							<option value='5' <?=isset($solder['grave']['settlement_type']) && $solder['grave']['settlement_type'] == 5 ? 'selected' : ''?> >село</option>
							<option value='6' <?=isset($solder['grave']['settlement_type']) && $solder['grave']['settlement_type'] == 6 ? 'selected' : ''?> >селище</option>
							<option value='7' <?=isset($solder['grave']['settlement_type']) && $solder['grave']['settlement_type'] == 7 ? 'selected' : ''?> >станиця</option>
							<option value='8' <?=isset($solder['grave']['settlement_type']) && $solder['grave']['settlement_type'] == 8 ? 'selected' : ''?> >хутір</option>
						</select>
						<input type="text" class="form-control col-sm-3" id="solder_grave_settlement" name="solder[grave][settlement]" value='<?=isset($solder['grave']['settlement']) ? $solder['grave']['settlement'] : ''?>' />
							
						<select class="form-control col-sm-1" id="solder_grave_street_type" name="solder[grave][street_type]">
							<option value='1' <?=isset($solder['grave']['street_type']) && $solder['grave']['street_type'] == 1 ? 'selected' : ''?> >бульв.</option>
							<option value='2' <?=!isset($solder['grave']['street_type']) || $solder['grave']['street_type'] == 2 ? 'selected' : ''?> >вул.</option>
							<option value='3' <?=isset($solder['grave']['street_type']) && $solder['grave']['street_type'] == 3 ? 'selected' : ''?> >просп.</option>
							<option value='4' <?=isset($solder['grave']['street_type']) && $solder['grave']['street_type'] == 4 ? 'selected' : ''?> >туп.</option>
							<option value='5' <?=isset($solder['grave']['street_type']) && $solder['grave']['street_type'] == 5 ? 'selected' : ''?> >наб.</option>
							<option value='6' <?=isset($solder['grave']['street_type']) && $solder['grave']['street_type'] == 6 ? 'selected' : ''?> >узвіз</option>
							<option value='7' <?=isset($solder['grave']['street_type']) && $solder['grave']['street_type'] == 7 ? 'selected' : ''?> >кладовище</option>
						</select>
						<input type="text" class="form-control col-sm-3" id="solder_grave_street" name="solder[grave][street]" value='<?=isset($solder['grave']['street']) ? $solder['grave']['street'] : ''?>' />
					</div>
					<div class="form-group">
						<label for="solder_grave_coments" class="col-sm-1">Коментарі</label>
						<input type="text" class="form-control col-sm-10" id="solder_grave_coments" name="solder[grave][comment]" value='<?=isset($solder['grave']['comment']) ? $solder['grave']['comment'] : ''?>' />
					</div>
				</div>
				<label>Інформація про нагороди</label> <button type="button" class="btn btn-success glyphicon glyphicon-plus-sign" id="add_awards"></button>
				<div class="well well-lg" id="awards_container">
					<? if (isset($solder['awards'])) foreach ($solder['awards'] as $key => $avard) { ?>
							<div class="form-group" id="awards_template_<?=$key?>">
								<label for="solder_awards_<?=$key?>_name" class="col-sm-1">Назва</label>
								<input type="text" class="form-control col-sm-2" id="solder_awards_<?=$key?>_name" name="solder[awards][<?=$key?>][name]" value="<?=isset($avard['name']) ? $avard['name'] : ''?>" />
								
								<label for="solder_awards_<?=$key?>_date" class="col-sm-1">Дата присвоєння</label>
								<input type="date" class="form-control col-sm-2" id="solder_awards_<?=$key?>_date" name="solder[awards][<?=$key?>][date]" value="<?=isset($avard['date']) ? $avard['date'] : ''?>" />
								
								<label for="solder_awards_<?=$key?>_comment" class="col-sm-1">Коментар</label>
								<input type="text" class="form-control col-sm-3" id="solder_awards_<?=$key?>_comment" name="solder[awards][<?=$key?>][description]" value="<?=isset($avard['description']) ? $avard['description'] : ''?>" />
								
								<label for="solder_awards_<?=$key?>_comment" class="col-sm-1"></label>
								<button type="button" class="btn btn-danger glyphicon glyphicon-minus-sign" id="delete_awards_<?=$key?>" onclick="$(this).parent().remove();"></button>
							</div>
						<? } ?>
				</div>
				<label>Інформація про рідних та близьких</label> <button type="button" class="btn btn-success glyphicon glyphicon-plus-sign" id="add_family"></button>
				<div class="well well-lg" id="family_container">
					<? if(isset($solder['family'])) foreach ($solder['family'] as $key => $family) { ?>
						<div class="well well-lg" id="family_template_<?=$key?>">
							<div class="form-group">
								
								<label for="solder_family_<?=$key?>_lname" class="col-sm-1">Прізвище</label>
								<div class="col-sm-2">
									<input type="text" class="form-control" id="solder_family_<?=$key?>_lname" name="solder[family][<?=$key?>][lname]" value="<?=isset($family['lname']) ? $family['lname'] : ''?>" />
								</div>
								
								<label for="solder_family_<?=$key?>_fname" class="col-sm-1">Ім`я</label>
								<div class="col-sm-2">
									<input type="text" class="form-control" id="solder_family_<?=$key?>_fname" name="solder[family][<?=$key?>][fname]" value="<?=isset($family['fname']) ? $family['fname'] : ''?>" />
								</div>
								
								<label for="solder_family_<?=$key?>_sname" class="col-sm-2">По Батькові</label>
								<div class="col-sm-2">
									<input type="text" class="form-control" id="solder_family_<?=$key?>_sname" name="solder[family][<?=$key?>][sname]" value="<?=isset($family['sname']) ? $family['sname'] : ''?>" />
								</div>
								
								<label for="solder_family_<?=$key?>_comment" class="col-sm-1"></label>
								<button type="button" class="btn btn-danger glyphicon glyphicon-minus-sign" id="delete_family_<?=$key?>" onclick="$(this).parent().parent().remove();"></button>
							</div>
							<div class="form-group">
								<label for="solder_family_<?=$key?>_tel1" class="col-sm-1">Тел1.</label>
								<div class="col-sm-2">
									<input type="tel" class="form-control" id="solder_family_<?=$key?>_tel1" name="solder[family][<?=$key?>][tel][1]" value="<?=isset($family['tel'][1]) ? $family['tel'][1] : ''?>" />
								</div>
								
								<label for="solder_family_<?=$key?>_tel2" class="col-sm-1">Тел2.</label>
								<div class="col-sm-2">
									<input type="tel" class="form-control" id="solder_family_<?=$key?>_tel2" name="solder[family][<?=$key?>][tel][2]" value="<?=isset($family['tel'][2]) ? $family['tel'][2] : ''?>" />
								</div>
								
								<label for="solder_family_<?=$key?>_tel3" class="col-sm-2">Тел3.</label>
								<div class="col-sm-2">
									<input type="tel" class="form-control" id="solder_family_<?=$key?>_tel3" name="solder[family][<?=$key?>][tel][3]" value="<?=isset($family['tel'][3]) ? $family['tel'][3] : ''?>" />
								</div>
							</div>
							<div class="form-group">	
								<label for="solder_family_<?=$key?>_name" class="col-sm-1">Ступінь родства</label>
								<input type="text" class="form-control col-sm-2" id="solder_family_<?=$key?>_name" name="solder[family][<?=$key?>][name]" value="<?=isset($family['name']) ? $family['name'] : ''?>" />
								
								<label for="solder_family_<?=$key?>_date" class="col-sm-1">Дата народження</label>
								<input type="date" class="form-control col-sm-2" id="solder_family_<?=$key?>_date" name="solder[family][<?=$key?>][date]" value="<?=isset($family['date']) ? $family['date'] : ''?>" />
								
								<label for="solder_family_<?=$key?>_comment" class="col-sm-2">Коментар</label>
								<input type="text" class="form-control col-sm-2" id="solder_family_<?=$key?>_comment" name="solder[family][<?=$key?>][comment]" value="<?=isset($family['comment']) ? $family['comment'] : ''?>" />
							</div>
						</div>
					<? } ?>
					<div class="form-group">
						<label for="solder_relations_coments" class="col-sm-1">Коментарі</label>
						<input type="text" class="form-control col-sm-10" id="solder_relations_coments" name="solder[relations][comment]" value='<?=isset($solder['relations']['comment']) ? $solder['relations']['comment'] : ''?>' />
					</div>
				</div>
				<div class="form-group">
					<label for="Cancel" class="col-sm-3"></label>
					<button class="btn btn-success col-sm-1" type="submit">Підтвердити</button>
					<label for="Cancel" class="col-sm-3"></label>
					<a href='/view/list/' class="btn btn-danger col-sm-1">Відмінити</a>
				</div>
			</form>
			
			<div class="form-group hidden" id="awards_template___id__">
				<label for="solder_awards___id___name" class="col-sm-1">Назва</label>
				<input type="text" class="form-control col-sm-2" id="solder_awards___id___name" name="solder[awards][__id__][name]" />
				
				<label for="solder_awards___id___date" class="col-sm-1">Дата присвоєння</label>
				<input type="date" class="form-control col-sm-2" id="solder_awards___id___date" name="solder[awards][__id__][date]" />
				
				<label for="solder_awards___id___comment" class="col-sm-1">Коментар</label>
				<input type="text" class="form-control col-sm-3" id="solder_awards___id___comment" name="solder[awards][__id__][description]" />
				
				<label for="solder_awards___id___comment" class="col-sm-1"></label>
				<button type="button" class="btn btn-danger glyphicon glyphicon-minus-sign" id="delete_awards___id__"></button>
			</div>
			
			<div class="well well-lg hidden" id="family_template___id__">
				<div class="form-group">
					
					<label for="solder_family___id___lname" class="col-sm-1">Прізвище</label>
					<div class="col-sm-2">
						<input type="text" class="form-control" id="solder_family___id___lname" name="solder[family][__id__][lname]" />
					</div>
					
					<label for="solder_family___id___fname" class="col-sm-1">Ім`я</label>
					<div class="col-sm-2">
						<input type="text" class="form-control" id="solder_family___id___fname" name="solder[family][__id__][fname]" />
					</div>
					
					<label for="solder_family___id___sname" class="col-sm-2">По Батькові</label>
					<div class="col-sm-2">
						<input type="text" class="form-control" id="solder_family___id___sname" name="solder[family][__id__][sname]" />
					</div>
					
					<label for="solder_family___id___comment" class="col-sm-1"></label>
					<button type="button" class="btn btn-danger glyphicon glyphicon-minus-sign" id="delete_family___id__"></button>
				</div>
				<div class="form-group">
					<label for="solder_family___id___tel1" class="col-sm-1">Тел1.</label>
					<div class="col-sm-2">
						<input type="tel" class="form-control" id="solder_family___id___tel1" name="solder[family][__id__][tel][1]" />
					</div>
					
					<label for="solder_family___id___tel2" class="col-sm-1">Тел2.</label>
					<div class="col-sm-2">
						<input type="tel" class="form-control" id="solder_family___id___tel2" name="solder[family][__id__][tel][2]" />
					</div>
					
					<label for="solder_family___id___tel3" class="col-sm-2">Тел3.</label>
					<div class="col-sm-2">
						<input type="tel" class="form-control" id="solder_family___id___tel3" name="solder[family][__id__][tel][3]" />
					</div>
				</div>
				<div class="form-group">	
					<label for="solder_family___id___name" class="col-sm-1">Ступінь родства</label>
					<input type="text" class="form-control col-sm-2" id="solder_family___id___name" name="solder[family][__id__][name]" />
					
					<label for="solder_family___id___date" class="col-sm-1">Дата народження</label>
					<input type="date" class="form-control col-sm-2" id="solder_family___id___date" name="solder[family[__id__][date]" />
					
					<label for="solder_family___id___comment" class="col-sm-2">Коментар</label>
					<input type="text" class="form-control col-sm-2" id="solder_family___id___comment" name="solder[family][__id__][comment]" />
				</div>
			</div>
			
		</div>
		</div>
	</body>
</html>