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