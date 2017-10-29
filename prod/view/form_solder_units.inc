<label>Підрозділи</label>  <button type="button" class="btn btn-success glyphicon glyphicon-plus-sign" id="add_unit"></button>
<?
	$solder['unit'] = isset($solder['unit']) ? $solder['unit'] : [];
	if (isset($solder['unit']['ordination'])) {
		$solder['unit'] = array($solder['unit']);
	}
?>
<div class="well well-lg" id="units_container">
<? foreach($solder['unit'] as $key => $unit) { ?>
    <div class="form-group" id="units_template_<?=$key?>">
        <div class="form-group">
            <label class="col-sm-1"></label>
            <select class="form-control col-sm-1" id="solder_unit_<?=$key?>_ordination" name="solder[unit][<?=$key?>][ordination]">
                <option value='1' <?=isset($unit['ordination']) && $unit['ordination'] == 1 ? 'selected' : ''?> >ЗСУ</option>
                <option value='2' <?=isset($unit['ordination']) && $unit['ordination'] == 2 ? 'selected' : ''?> >Національна гвардія</option>
                <option value='3' <?=isset($unit['ordination']) && $unit['ordination'] == 3 ? 'selected' : ''?> >МВС</option>
                <option value='4' <?=isset($unit['ordination']) && $unit['ordination'] == 4 ? 'selected' : ''?> >СБУ</option>
                <option value='5' <?=isset($unit['ordination']) && $unit['ordination'] == 5 ? 'selected' : ''?> >Прикордонна служба</option>
                <option value='6' <?=isset($unit['ordination']) && $unit['ordination'] == 6 ? 'selected' : ''?> >ДСНС</option>
                <option value='7' <?=isset($unit['ordination']) && $unit['ordination'] == 7 ? 'selected' : ''?> >ДУК</option>
                <option value='8' <?=isset($unit['ordination']) && $unit['ordination'] == 8 ? 'selected' : ''?> >Волонтер</option>
                <option value='9' <?=isset($unit['ordination']) && $unit['ordination'] == 9 ? 'selected' : ''?> >ЦСО</option>
            </select>
            <input placeholder="Підрозділ" type="text" class="form-control col-sm-3" id="solder_unit_<?=$key?>_name" name="solder[unit][<?=$key?>][name]" value='<?=isset($unit['name']) ? $unit['name'] : ''?>' />
            <input placeholder="Батальон" type="text" class="form-control col-sm-1" id="solder_unit_<?=$key?>_battalion" name="solder[unit][<?=$key?>][battalion]" value='<?=isset($unit['battalion']) ? $unit['battalion'] : ''?>' />
            <input placeholder="Рота" type="text" class="form-control col-sm-1" id="solder_unit_<?=$key?>_company" name="solder[unit][<?=$key?>][company]" value='<?=isset($unit['company']) ? $unit['company'] : ''?>' />

            <label for="solder_unit_<?=$key?>_comment" class="col-sm-1"></label>
            <button type="button" class="btn btn-danger glyphicon glyphicon-minus-sign" id="delete_unit_<?=$key?>" onclick="$(this).parent().parent().remove();"></button>
        </div>
        <div class="form-group">
            <label for="solder_unit_<?=$key?>_start" class="col-sm-1">Початок служби</label>
            <div class="col-sm-2">
                <input type="date" class="form-control" id="solder_unit_<?=$key?>_start" name="solder[unit][<?=$key?>][start]" value='<?=isset($unit['start']) ? $unit['start'] : ''?>' />
            </div>

            <label for="solder_unit_<?=$key?>_end" class="col-sm-1">Кінець служби</label>
            <div class="col-sm-2">
                <input type="date" class="form-control" id="solder_unit_<?=$key?>_end" name="solder[unit][<?=$key?>][end]" value='<?=isset($unit['end']) ? $unit['end'] : ''?>' />
            </div>
        </div>
    </div>
<? } ?>
</div>