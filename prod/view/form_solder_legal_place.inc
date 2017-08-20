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