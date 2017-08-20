<label>Підрозділи</label>  <button type="button" class="btn btn-success glyphicon glyphicon-plus-sign" id="add_unit"></button>
<div class="well well-lg">
<?
	$solder['unit'] = isset($solder['unit']) ? $solder['unit'] : [];
	if (isset($solder['unit']['ordination'])) {
		$solder['unit'] = array($solder['unit']);
	}
?>
<? foreach($solder['unit'] as $key => $unit) { ?>
	<div class="well well-lg" id="awards_container">
	<div class="form-group">
		<select class="form-control col-sm-1" id="solder_unit_ordination" name="solder[unit][ordination]">
			<option value='1' <?=isset($solder['unit']['ordination']) && $solder['unit']['ordination'] == 1 ? 'selected' : ''?> >ЗСУ</option>
			<option value='2' <?=isset($solder['unit']['ordination']) && $solder['unit']['ordination'] == 2 ? 'selected' : ''?> >Національна гвардія</option>
			<option value='3' <?=isset($solder['unit']['ordination']) && $solder['unit']['ordination'] == 3 ? 'selected' : ''?> >МВС</option>
			<option value='4' <?=isset($solder['unit']['ordination']) && $solder['unit']['ordination'] == 4 ? 'selected' : ''?> >СБУ</option>
			<option value='5' <?=isset($solder['unit']['ordination']) && $solder['unit']['ordination'] == 5 ? 'selected' : ''?> >Прикордонна служба</option>
			<option value='6' <?=isset($solder['unit']['ordination']) && $solder['unit']['ordination'] == 6 ? 'selected' : ''?> >ДСНС</option>
			<option value='7' <?=isset($solder['unit']['ordination']) && $solder['unit']['ordination'] == 7 ? 'selected' : ''?> >ДУК</option>
			<option value='8' <?=isset($solder['unit']['ordination']) && $solder['unit']['ordination'] == 8 ? 'selected' : ''?> >Волонтер</option>
			<option value='9' <?=isset($solder['unit']['ordination']) && $solder['unit']['ordination'] == 9 ? 'selected' : ''?> >ЦСО</option>
		</select>
		<input placeholder="Підрозділ" type="text" class="form-control col-sm-3" id="solder_unit_name" name="solder[unit][name]" value='<?=isset($solder['unit']['name']) ? $solder['unit']['name'] : ''?>' />
		<input placeholder="Батальон" type="text" class="form-control col-sm-1" id="solder_unit_battalion" name="solder[unit][battalion]" value='<?=isset($solder['unit']['battalion']) ? $solder['unit']['battalion'] : ''?>' />
		<input placeholder="Рота" type="text" class="form-control col-sm-1" id="solder_unit_company" name="solder[unit][company]" value='<?=isset($solder['unit']['company']) ? $solder['unit']['company'] : ''?>' />

		<label for="solder_unit_start" class="col-sm-1">Початок служби</label>
		<div class="col-sm-2">
			<input type="date" class="form-control" id="solder_mobilisation_date" name="solder[unit][start]" value='<?=isset($solder['unit']['start']) ? $solder['unit']['start'] : ''?>' />
		</div>

		<label for="solder_unit_end" class="col-sm-1">Кінець служби</label>
		<div class="col-sm-2">
			<input type="date" class="form-control" id="solder_mobilisation_date" name="solder[unit][end]" value='<?=isset($solder['unit']['end']) ? $solder['unit']['end'] : ''?>' />
		</div>

	</div>
<? } ?>
</div>