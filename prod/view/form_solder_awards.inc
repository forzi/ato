<label>Інформація про нагороди</label> <button type="button" class="btn btn-success glyphicon glyphicon-plus-sign" id="add_awards"></button>
<div class="well well-lg" id="awards_container">
	<? if (isset($solder['awards'])) foreach ($solder['awards'] as $key => $avard) { ?>
			<div class="form-group" id="awards_template_<?=$key?>">
				<div class="form-group">
					<label for="solder_awards_<?=$key?>_number" class="col-sm-1">Номер</label>
					<input type="text" class="form-control col-sm-1" id="solder_awards_<?=$key?>_number" name="solder[awards][<?=$key?>][number]" value="<?=isset($avard['number']) ? $avard['number'] : ''?>" />
					
					<label for="solder_awards_<?=$key?>_name" class="col-sm-1">Назва</label>
					<input type="text" class="form-control col-sm-3" id="solder_awards_<?=$key?>_name" name="solder[awards][<?=$key?>][name]" value="<?=isset($avard['name']) ? $avard['name'] : ''?>" />
					
					<label for="solder_awards_<?=$key?>_rank" class="col-sm-1">Ступінь</label>
					<select class="form-control col-sm-1" id="solder_awards_<?=$key?>_rank" name="solder[awards][<?=$key?>][rank]">
						<option value='3' <?=isset($avard['rank']) && $avard['rank'] == 3 ? 'selected' : ''?> >III</option>
						<option value='2' <?=isset($avard['rank']) && $avard['rank'] == 2 ? 'selected' : ''?> >II</option>
						<option value='1' <?=isset($avard['rank']) && $avard['rank'] == 1 ? 'selected' : ''?> >I</option>
					</select>
					
					<label for="solder_awards_<?=$key?>_comment" class="col-sm-1"></label>
					<button type="button" class="btn btn-danger glyphicon glyphicon-minus-sign" id="delete_awards_<?=$key?>" onclick="$(this).parent().parent().remove();"></button>
				</div>
				<div class="form-group">
					<label for="solder_awards_<?=$key?>_date" class="col-sm-1">Дата присвоєння</label>
					<input type="date" class="form-control col-sm-2" id="solder_awards_<?=$key?>_date" name="solder[awards][<?=$key?>][date]" value="<?=isset($avard['date']) ? $avard['date'] : ''?>" />
					
					<label for="solder_awards_<?=$key?>_comment" class="col-sm-1">Коментар</label>
					<input type="text" class="form-control col-sm-2" id="solder_awards_<?=$key?>_comment" name="solder[awards][<?=$key?>][description]" value="<?=isset($avard['description']) ? $avard['description'] : ''?>" />
					
				</div>
			</div>
		<? } ?>
</div>