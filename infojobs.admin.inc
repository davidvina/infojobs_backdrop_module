<?php


function infojobs_admin_form($form, &$form_state){

	$form['description'] = array(
    	'#type' => 'item',
    	'#title' => t('A form with nothing but a textfield'),
  	);


	return $form;

}



function infojobs_list_profile_form($form, &$form_state){

	$form['description'] = array(
    	'#type' => 'item',
    	'#title' => t('A form with nothing but a textfield'),
  	);


	return $form;

}

