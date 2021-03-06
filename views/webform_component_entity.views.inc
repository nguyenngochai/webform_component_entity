<?php

/**
 * Implements hook_views_default_views().
 */
function webform_component_entity_views_default_views() {
  $views = array();

  $view = new view();
  $view->name = 'webform_component';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'webform_component_entity';
  $view->human_name = 'Webform Component';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Webform Component';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'type' => 'type',
    'value' => 'value',
    'field_component_tags' => 'field_component_tags',
    'field_sample_additional' => 'field_sample_additional',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
  	'sortable' => 0,
  	'default_sort_order' => 'asc',
  	'align' => '',
  	'separator' => '',
  	'empty_column' => 0,
    ),
    'type' => array(
  	'sortable' => 0,
  	'default_sort_order' => 'asc',
  	'align' => '',
  	'separator' => '',
  	'empty_column' => 0,
    ),
    'value' => array(
  	'sortable' => 0,
  	'default_sort_order' => 'asc',
  	'align' => '',
  	'separator' => '',
  	'empty_column' => 0,
    ),
    'field_component_tags' => array(
  	'sortable' => 0,
  	'default_sort_order' => 'asc',
  	'align' => '',
  	'separator' => '',
  	'empty_column' => 0,
    ),
    'field_sample_additional' => array(
  	'sortable' => 0,
  	'default_sort_order' => 'asc',
  	'align' => '',
  	'separator' => '',
  	'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  /* Field: Webform Component Entity: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'webform_component_entity';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  /* Field: Webform Component Entity: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'webform_component_entity';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Webform Component Entity: Value */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'webform_component_entity';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  /* Field: Webform Component Entity: Component Tags */
  $handler->display->display_options['fields']['field_component_tags']['id'] = 'field_component_tags';
  $handler->display->display_options['fields']['field_component_tags']['table'] = 'field_data_field_component_tags';
  $handler->display->display_options['fields']['field_component_tags']['field'] = 'field_component_tags';
  /* Field: Webform Component Entity: Sample Additional Field */
  $handler->display->display_options['fields']['field_sample_additional']['id'] = 'field_sample_additional';
  $handler->display->display_options['fields']['field_sample_additional']['table'] = 'field_data_field_sample_additional';
  $handler->display->display_options['fields']['field_sample_additional']['field'] = 'field_sample_additional';
  /* Field: Bulk operations: Webform Component Entity */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'webform_component_entity';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::webform_component_entity_add_to_webform' => array(
  	'selected' => 1,
  	'postpone_processing' => 0,
  	'skip_confirmation' => 1,
  	'override_label' => 0,
  	'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
  	'selected' => 0,
  	'postpone_processing' => 0,
  	'skip_confirmation' => 0,
  	'override_label' => 0,
  	'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
  	'selected' => 0,
  	'postpone_processing' => 0,
  	'skip_confirmation' => 0,
  	'override_label' => 0,
  	'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
  	'selected' => 0,
  	'postpone_processing' => 0,
  	'skip_confirmation' => 0,
  	'override_label' => 0,
  	'label' => '',
  	'settings' => array(
  	  'show_all_tokens' => 1,
  	  'display_values' => array(
  		'_all_' => '_all_',
  	  ),
  	),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
  	'selected' => 0,
  	'skip_confirmation' => 0,
  	'override_label' => 0,
  	'label' => '',
  	'settings' => array(
  	  'url' => '',
  	),
    ),
    'action::system_send_email_action' => array(
  	'selected' => 0,
  	'postpone_processing' => 0,
  	'skip_confirmation' => 0,
  	'override_label' => 0,
  	'label' => '',
    ),
  );
  /* Sort criterion: Webform Component Entity: Component Tags (field_component_tags) */
  $handler->display->display_options['sorts']['field_component_tags_tid']['id'] = 'field_component_tags_tid';
  $handler->display->display_options['sorts']['field_component_tags_tid']['table'] = 'field_data_field_component_tags';
  $handler->display->display_options['sorts']['field_component_tags_tid']['field'] = 'field_component_tags_tid';
  $handler->display->display_options['sorts']['field_component_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_component_tags_tid']['expose']['label'] = 'Component Tags';
  /* Sort criterion: Webform Component Entity: Sample Additional Field (field_sample_additional) */
  $handler->display->display_options['sorts']['field_sample_additional_value']['id'] = 'field_sample_additional_value';
  $handler->display->display_options['sorts']['field_sample_additional_value']['table'] = 'field_data_field_sample_additional';
  $handler->display->display_options['sorts']['field_sample_additional_value']['field'] = 'field_sample_additional_value';
  $handler->display->display_options['sorts']['field_sample_additional_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_sample_additional_value']['expose']['label'] = 'Sample Additional Field';
  /* Filter criterion: Webform Component Entity: Component Tags (field_component_tags) */
  $handler->display->display_options['filters']['field_component_tags_tid']['id'] = 'field_component_tags_tid';
  $handler->display->display_options['filters']['field_component_tags_tid']['table'] = 'field_data_field_component_tags';
  $handler->display->display_options['filters']['field_component_tags_tid']['field'] = 'field_component_tags_tid';
  $handler->display->display_options['filters']['field_component_tags_tid']['value'] = '';
  $handler->display->display_options['filters']['field_component_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_component_tags_tid']['expose']['operator_id'] = 'field_component_tags_tid_op';
  $handler->display->display_options['filters']['field_component_tags_tid']['expose']['label'] = 'Component Tags';
  $handler->display->display_options['filters']['field_component_tags_tid']['expose']['operator'] = 'field_component_tags_tid_op';
  $handler->display->display_options['filters']['field_component_tags_tid']['expose']['identifier'] = 'field_component_tags_tid';
  $handler->display->display_options['filters']['field_component_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_component_tags_tid']['vocabulary'] = 'component_tags';
  /* Filter criterion: Webform Component Entity: Sample Additional Field (field_sample_additional) */
  $handler->display->display_options['filters']['field_sample_additional_value']['id'] = 'field_sample_additional_value';
  $handler->display->display_options['filters']['field_sample_additional_value']['table'] = 'field_data_field_sample_additional';
  $handler->display->display_options['filters']['field_sample_additional_value']['field'] = 'field_sample_additional_value';
  $handler->display->display_options['filters']['field_sample_additional_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sample_additional_value']['expose']['operator_id'] = 'field_sample_additional_value_op';
  $handler->display->display_options['filters']['field_sample_additional_value']['expose']['label'] = 'Sample Additional Field';
  $handler->display->display_options['filters']['field_sample_additional_value']['expose']['operator'] = 'field_sample_additional_value_op';
  $handler->display->display_options['filters']['field_sample_additional_value']['expose']['identifier'] = 'field_sample_additional_value';
  $handler->display->display_options['filters']['field_sample_additional_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'node/%/webform/add-from-library';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Webform Component Entity: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'webform_component_entity';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Webform Component Entity: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'webform_component_entity';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Webform Component Entity: Value */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'webform_component_entity';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  /* Field: Webform Component Entity: Component Tags */
  $handler->display->display_options['fields']['field_component_tags']['id'] = 'field_component_tags';
  $handler->display->display_options['fields']['field_component_tags']['table'] = 'field_data_field_component_tags';
  $handler->display->display_options['fields']['field_component_tags']['field'] = 'field_component_tags';
  /* Field: Webform Component Entity: Sample Additional Field */
  $handler->display->display_options['fields']['field_sample_additional']['id'] = 'field_sample_additional';
  $handler->display->display_options['fields']['field_sample_additional']['table'] = 'field_data_field_sample_additional';
  $handler->display->display_options['fields']['field_sample_additional']['field'] = 'field_sample_additional';
  /* Field: Bulk operations: Webform Component Entity */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'webform_component_entity';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::webform_component_entity_add_to_webform' => array(
  	'selected' => 0,
  	'postpone_processing' => 0,
  	'skip_confirmation' => 0,
  	'override_label' => 0,
  	'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
  	'selected' => 1,
  	'postpone_processing' => 0,
  	'skip_confirmation' => 0,
  	'override_label' => 0,
  	'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
  	'selected' => 0,
  	'postpone_processing' => 0,
  	'skip_confirmation' => 0,
  	'override_label' => 0,
  	'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
  	'selected' => 0,
  	'postpone_processing' => 0,
  	'skip_confirmation' => 0,
  	'override_label' => 0,
  	'label' => '',
  	'settings' => array(
  	  'show_all_tokens' => 1,
  	  'display_values' => array(
  		'_all_' => '_all_',
  	  ),
  	),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
  	'selected' => 0,
  	'skip_confirmation' => 0,
  	'override_label' => 0,
  	'label' => '',
  	'settings' => array(
  	  'url' => '',
  	),
    ),
    'action::system_send_email_action' => array(
  	'selected' => 0,
  	'postpone_processing' => 0,
  	'skip_confirmation' => 0,
  	'override_label' => 0,
  	'label' => '',
    ),
  );
  $handler->display->display_options['path'] = 'admin/config/content/webform-component-entity';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Webform Component Entity';
  $handler->display->display_options['menu']['description'] = 'Administer Webform Component Entity';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';
  
  $views[] = $view;
  return $views;
}
