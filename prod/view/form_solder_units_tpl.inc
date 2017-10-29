<div class="form-group hidden" id="units_template___id__">
    <div class="form-group">
        <label class="col-sm-1"></label>
        <select class="form-control col-sm-1" id="solder_unit___id___ordination" name="solder[unit][__id__][ordination]">
            <option value='1' selected>ЗСУ</option>
            <option value='2'>Національна гвардія</option>
            <option value='3'>МВС</option>
            <option value='4'>СБУ</option>
            <option value='5'>Прикордонна служба</option>
            <option value='6'>ДСНС</option>
            <option value='7'>ДУК</option>
            <option value='8'>Волонтер</option>
            <option value='9'>ЦСО</option>
        </select>
        <input placeholder="Підрозділ" type="text" class="form-control col-sm-3" id="solder_unit___id___name" name="solder[unit][__id__][name]" value='' />
        <input placeholder="Батальон" type="text" class="form-control col-sm-1" id="solder_unit___id___battalion" name="solder[unit][__id__][battalion]" value='' />
        <input placeholder="Рота" type="text" class="form-control col-sm-1" id="solder_unit___id___company" name="solder[unit][__id__][company]" value='' />

        <label class="col-sm-1"></label>
        <button type="button" class="btn btn-danger glyphicon glyphicon-minus-sign" id="delete_unit___id__" onclick="$(this).parent().parent().remove();"></button>
    </div>
    <div class="form-group">
        <label for="solder_unit___id___start" class="col-sm-1">Початок служби</label>
        <div class="col-sm-2">
            <input type="date" class="form-control" id="solder_unit___id___start" name="solder[unit][__id__][start]" value='' />
        </div>

        <label for="solder_unit___id___end" class="col-sm-1">Кінець служби</label>
        <div class="col-sm-2">
            <input type="date" class="form-control" id="solder_unit___id___end" name="solder[unit][__id__][end]" value='' />
        </div>
    </div>
</div>