<label>Звання</label> <button type="button" class="btn btn-success glyphicon glyphicon-plus-sign" id="add_ranks"></button>
<div class="well well-lg" id="ranks_container">
    <? if (isset($solder['ranks'])) foreach ($solder['ranks'] as $key => $rank) { ?>
        <div class="form-group" id="ranks_template_<?=$key?>">
            <div class="form-group">
                <label for="solder_ranks_<?=$key?>_type" class="col-sm-1">Звання</label>
                <input type="text" class="form-control col-sm-2" id="solder_ranks_<?=$key?>_name" name="solder[ranks][<?=$key?>][name]" value="<?=isset($rank['name']) ? $rank['name'] : ''?>" />
                <label for="solder_ranks_<?=$key?>_date" class="col-sm-1">Дата присвоєння</label>
                <input type="date" class="form-control col-sm-2" id="solder_ranks_<?=$key?>_date" name="solder[ranks][<?=$key?>][date]" value="<?=isset($rank['date']) ? $rank['date'] : ''?>" />
                <label for="solder_ranks_<?=$key?>_type" class="col-sm-1">Наказ №</label>
                <input type="text" class="form-control col-sm-2" id="solder_ranks_<?=$key?>_order" name="solder[ranks][<?=$key?>][order]" value="<?=isset($rank['order']) ? $rank['order'] : ''?>" />
                <label class="col-sm-1"></label>
                <button type="button" class="btn btn-danger glyphicon glyphicon-minus-sign" id="delete_ranks_<?=$key?>" onclick="$(this).parent().parent().remove();"></button>
            </div>
            <div class="form-group">
                <label for="solder_ranks_<?=$key?>_comment" class="col-sm-1">Коментар</label>
                <input type="text" class="form-control col-sm-8" id="solder_ranks_<?=$key?>_comment" name="solder[ranks][<?=$key?>][description]" value="<?=isset($rank['description']) ? $rank['description'] : ''?>" />
            </div>
        </div>
    <? } ?>
</div>