$(document).ready(function(){
var get_id = function(data) {
	data = data.split("_");
	data = data[data.length - 1];
	return data - 0 + 1;
}
var units_id = function() {
	var data = $('#units_container').children().eq(-1).get(0);
	if (data == undefined) {
		return 0;
	}
	return get_id(data.id);
}
var awards_id = function() {
	var data = $('#awards_container').children().eq(-1).get(0);
	if (data == undefined) {
		return 0;
	}
	return get_id(data.id);
}
var family_id = function() {
	var data = $('#family_container').children().eq(-2).get(0);
	if (data == undefined) {
		return 0;
	}
	return get_id(data.id);
}
var ranks_id = function() {
    var data = $('#ranks_container').children().eq(-1).get(0);
    if (data == undefined) {
        return 0;
    }
    return get_id(data.id);
}
var injuries_id = function() {
	var data = $('#injuries_container').children().eq(-1).get(0);
	if (data == undefined) {
		return 0;
	}
	return get_id(data.id);
}
	$('#add_unit').click(function(){
		var contents = $('#units_template___id__').get(0).outerHTML;
		var new_id = units_id();
		contents = contents.replace(/(__id__)/gi, new_id);
		$('#units_container').append(contents);
		$('#units_template_' + new_id).removeClass('hidden');
		$('#delete_units_' + new_id).click(function() {
			$(this).parent().parent().remove();			
		});
	});
	$('#add_awards').click(function(){
		var contents = $('#awards_template___id__').get(0).outerHTML;
		var new_id = awards_id();
		contents = contents.replace(/(__id__)/gi, new_id);
		$('#awards_container').append(contents);
		$('#awards_template_' + new_id).removeClass('hidden');
		$('#delete_awards_' + new_id).click(function() {
			$(this).parent().parent().remove();			
		});
	});
	$('#add_family').click(function(){
		var contents = $('#family_template___id__').get(0).outerHTML;
		var new_id = family_id();
		contents = contents.replace(/(__id__)/gi, new_id);
		$('#family_container').children().eq(-1).before(contents);
		$('#family_template_' + new_id).removeClass('hidden');
		$('#delete_family_' + new_id).click(function() {
			$(this).parent().parent().remove();			
		});
	});
    $('#add_ranks').click(function(){
        var contents = $('#ranks_template___id__').get(0).outerHTML;
        var new_id = ranks_id();
        contents = contents.replace(/(__id__)/gi, new_id);
        $('#ranks_container').append(contents);
        $('#ranks_template_' + new_id).removeClass('hidden');
        $('#delete_ranks_' + new_id).click(function() {
            $(this).parent().parent().remove();
        });
    });
	$('#add_injuries').click(function(){
		var contents = $('#injuries_template___id__').get(0).outerHTML;
		var new_id = injuries_id();
		contents = contents.replace(/(__id__)/gi, new_id);
		$('#injuries_container').append(contents);
		$('#injuries_template_' + new_id).removeClass('hidden');
		$('#delete_injuries_' + new_id).click(function() {
			$(this).parent().parent().remove();			
		});
	});
});