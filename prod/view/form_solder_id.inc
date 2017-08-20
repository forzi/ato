<label>Військовий квиток</label>
<div class="well well-lg">
	<div class="form-group">
		<label for="solder_ID" class="col-sm-1">Номер</label>
		<div class="col-sm-3">
			<input type="text" class="form-control" id="solder_ID" name="solder[ID][number]" value='<?=isset($solder['ID']['number']) ? $solder['ID']['number'] : ''?>' />
		</div>
	
		<label for="solder_ID_date" class="col-sm-1">Дата видачі</label>
		<div class="col-sm-3">
			<input type="date" class="form-control" id="solder_passport_date" name="solder[ID][date]" value='<?=isset($solder['ID']['date']) ? $solder['ID']['date'] : ''?>' />
		</div>
		<label for="solder_ID_place" class="col-sm-1">Ким виданий</label>
		<div class="col-sm-3">
			<textarea class="form-control" id="solder_passport_place" name="solder[ID][place]" value='<?=isset($solder['ID']['place']) ? $solder['ID']['place'] : ''?>'><?=isset($solder['ID']['place']) ? $solder['ID']['place'] : ''?></textarea>
		</div>
	</div>
</div>