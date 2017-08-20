<label>Посвідчення УБД</label>
<div class="well well-lg">
	<div class="form-group">
		<label for="solder_combatant" class="col-sm-1">Номер</label>
		<div class="col-sm-3">
			<input type="text" class="form-control" id="solder_combatant" name="solder[combatant][number]" value='<?=isset($solder['combatant']['number']) ? $solder['combatant']['number'] : ''?>' />
		</div>
	
		<label for="solder_combatant_date" class="col-sm-1">Дата видачі</label>
		<div class="col-sm-3">
			<input type="date" class="form-control" id="solder_passport_date" name="solder[combatant][date]" value='<?=isset($solder['combatant']['date']) ? $solder['combatant']['date'] : ''?>' />
		</div>
		<label for="solder_combatant_place" class="col-sm-1">Ким виданий</label>
		<div class="col-sm-3">
			<textarea class="form-control" id="solder_passport_place" name="solder[combatant][place]" value='<?=isset($solder['combatant']['place']) ? $solder['combatant']['place'] : ''?>'><?=isset($solder['combatant']['place']) ? $solder['combatant']['place'] : ''?></textarea>
		</div>
	</div>
</div>