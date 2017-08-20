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