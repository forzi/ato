<div class="form-group hidden" id="awards_template___id__">			
	<div class="form-group">
        <label for="solder_awards___id___type" class="col-sm-1">Нагорода</label>
        <select class="form-control col-sm-2" id="solder_awards___id___type" name="solder[awards][__id__][type]">
            <option value='1'>Медаль (відзнака)</option>
            <option value='2'>Орден</option>
            <option value='3'>Інше</option>
            <option value='4'>Недержавна нагорода</option>
        </select>

        <input type="text" class="form-control col-sm-3" id="solder_awards___id___name" name="solder[awards][__id__][name]" />

		<label for="solder_awards___id___rank" class="col-sm-1">Ступінь</label>
		<select class="form-control col-sm-1" id="solder_awards___id___rank" name="solder[awards][__id__][rank]">
            <option value='5'>V</option>
            <option value='4'>IV</option>
            <option value='3' selected>III</option>
			<option value='2'>II</option>
			<option value='1'>I</option>
		</select>
		
		<label for="solder_awards___id___comment" class="col-sm-1"></label>
		<button type="button" class="btn btn-danger glyphicon glyphicon-minus-sign" id="delete_awards___id__"></button>
	</div>
	<div class="form-group">
        <label for="solder_awards___id___number" class="col-sm-1">Номер</label>
        <input type="text" class="form-control col-sm-1" id="solder_awards___id___number" name="solder[awards][__id__][number]" />

		<label for="solder_awards___id___date" class="col-sm-1">Дата присвоєння</label>
		<input type="date" class="form-control col-sm-2" id="solder_awards___id___date" name="solder[awards][__id__][date]" />
		
		<label for="solder_awards___id___comment" class="col-sm-1">Коментар</label>
		<input type="text" class="form-control col-sm-2" id="solder_awards___id___comment" name="solder[awards][__id__][description]" />
	</div>
</div>
