<label>Інформація про мобілізацію</label>
<div class="well well-lg">
	<div class="form-group">
		<label for="solder_mobilisation_number" class="col-sm-1">Хвиля мобілізації</label>
		<div class="col-sm-2">
			<input type="text" class="form-control" id="solder_mobilisation_number" name="solder[mobilisation_number]" value='<?=isset($solder['mobilisation_number']) ? $solder['mobilisation_number'] : ''?>' />
		</div>
		
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
		<label for="solder_callsign" class="col-sm-1">Позивний</label>
		<input type="text" class="form-control col-sm-3" id="solder_callsign" name="solder[callsign]" value='<?=isset($solder['callsign']) ? $solder['callsign'] : ''?>' />
	</div>
</div>