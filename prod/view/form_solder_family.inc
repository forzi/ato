<label>Інформація про рідних та близьких</label> <button type="button" class="btn btn-success glyphicon glyphicon-plus-sign" id="add_family"></button>
<div class="well well-lg" id="family_container">
	<? if(isset($solder['family'])) foreach ($solder['family'] as $key => $family) { ?>
		<div class="well well-lg" id="family_template_<?=$key?>">
			<div class="form-group">
				
				<label for="solder_family_<?=$key?>_lname" class="col-sm-1">Прізвище</label>
				<div class="col-sm-2">
					<input type="text" class="form-control" id="solder_family_<?=$key?>_lname" name="solder[family][<?=$key?>][lname]" value="<?=isset($family['lname']) ? $family['lname'] : ''?>" />
				</div>
				
				<label for="solder_family_<?=$key?>_fname" class="col-sm-1">Ім`я</label>
				<div class="col-sm-2">
					<input type="text" class="form-control" id="solder_family_<?=$key?>_fname" name="solder[family][<?=$key?>][fname]" value="<?=isset($family['fname']) ? $family['fname'] : ''?>" />
				</div>
				
				<label for="solder_family_<?=$key?>_sname" class="col-sm-2">По Батькові</label>
				<div class="col-sm-2">
					<input type="text" class="form-control" id="solder_family_<?=$key?>_sname" name="solder[family][<?=$key?>][sname]" value="<?=isset($family['sname']) ? $family['sname'] : ''?>" />
				</div>
				
				<label for="solder_family_<?=$key?>_comment" class="col-sm-1"></label>
				<button type="button" class="btn btn-danger glyphicon glyphicon-minus-sign" id="delete_family_<?=$key?>" onclick="$(this).parent().parent().remove();"></button>
			</div>
			<div class="form-group">
				<label for="solder_family_<?=$key?>_tel1" class="col-sm-1">Тел1.</label>
				<div class="col-sm-2">
					<input type="tel" class="form-control" id="solder_family_<?=$key?>_tel1" name="solder[family][<?=$key?>][tel][1]" value="<?=isset($family['tel'][1]) ? $family['tel'][1] : ''?>" />
				</div>
				
				<label for="solder_family_<?=$key?>_tel2" class="col-sm-1">Тел2.</label>
				<div class="col-sm-2">
					<input type="tel" class="form-control" id="solder_family_<?=$key?>_tel2" name="solder[family][<?=$key?>][tel][2]" value="<?=isset($family['tel'][2]) ? $family['tel'][2] : ''?>" />
				</div>
				
				<label for="solder_family_<?=$key?>_tel3" class="col-sm-2">Тел3.</label>
				<div class="col-sm-2">
					<input type="tel" class="form-control" id="solder_family_<?=$key?>_tel3" name="solder[family][<?=$key?>][tel][3]" value="<?=isset($family['tel'][3]) ? $family['tel'][3] : ''?>" />
				</div>
			</div>
			<div class="form-group">	
				<label for="solder_family_<?=$key?>_name" class="col-sm-1">Ступінь родства</label>
				<input type="text" class="form-control col-sm-2" id="solder_family_<?=$key?>_name" name="solder[family][<?=$key?>][name]" value="<?=isset($family['name']) ? $family['name'] : ''?>" />
				
				<label for="solder_family_<?=$key?>_date" class="col-sm-1">Дата народження</label>
				<input type="date" class="form-control col-sm-2" id="solder_family_<?=$key?>_date" name="solder[family][<?=$key?>][date]" value="<?=isset($family['date']) ? $family['date'] : ''?>" />
				
				<label for="solder_family_<?=$key?>_comment" class="col-sm-2">Коментар</label>
				<input type="text" class="form-control col-sm-2" id="solder_family_<?=$key?>_comment" name="solder[family][<?=$key?>][comment]" value="<?=isset($family['comment']) ? $family['comment'] : ''?>" />
			</div>
		</div>
	<? } ?>
	<div class="form-group">
		<label for="solder_relations_coments" class="col-sm-1">Коментарі</label>
		<input type="text" class="form-control col-sm-10" id="solder_relations_coments" name="solder[relations][comment]" value='<?=isset($solder['relations']['comment']) ? $solder['relations']['comment'] : ''?>' />
	</div>
</div>