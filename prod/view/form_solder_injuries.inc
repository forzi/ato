<label>Поранення</label> <button type="button" class="btn btn-success glyphicon glyphicon-plus-sign" id="add_injuries"></button>
<div class="well well-lg" id="injuries_container">
    <? if (isset($solder['injuries'])) foreach ($solder['injuries'] as $key => $injury) { ?>
        <div class="form-group" id="injuries_template_<?=$key?>">
            <div class="form-group">
                <label for="solder_injuries_<?=$key?>_type" class="col-sm-1">Поранення (діагноз)</label>
                <input type="text" class="form-control col-sm-2" id="solder_injuries_<?=$key?>_name" name="solder[injuries][<?=$key?>][name]" value="<?=isset($injury['name']) ? $injury['name'] : ''?>" />
                <label for="solder_injuries_<?=$key?>_date" class="col-sm-1">Дата отримання</label>
                <input type="date" class="form-control col-sm-2" id="solder_injuries_<?=$key?>_date" name="solder[injuries][<?=$key?>][date]" value="<?=isset($injury['date']) ? $injury['date'] : ''?>" />
                <label for="solder_injuries_<?=$key?>_type" class="col-sm-1">Місце</label>
                <input type="text" class="form-control col-sm-2" id="solder_injuries_<?=$key?>_place" name="solder[injuries][<?=$key?>][place]" value="<?=isset($injury['place']) ? $injury['place'] : ''?>" />
                <label class="col-sm-1"></label>
                <button type="button" class="btn btn-danger glyphicon glyphicon-minus-sign" id="delete_injuries_<?=$key?>" onclick="$(this).parent().parent().remove();"></button>
            </div>
            <div class="form-group">
                <label for="solder_injuries_<?=$key?>_comment" class="col-sm-1">Коментар</label>
                <input type="text" class="form-control col-sm-8" id="solder_injuries_<?=$key?>_comment" name="solder[injuries][<?=$key?>][description]" value="<?=isset($injury['description']) ? $injury['description'] : ''?>" />
            </div>
        </div>
    <? } ?>
</div>
