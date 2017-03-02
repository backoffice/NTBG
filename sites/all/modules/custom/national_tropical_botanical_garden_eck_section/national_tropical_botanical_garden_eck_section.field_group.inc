<?php
/**
 * @file
 * national_tropical_botanical_garden_eck_section.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function national_tropical_botanical_garden_eck_section_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column1|section|basic_multifield|default';
  $field_group->group_name = 'group_column1';
  $field_group->entity_type = 'section';
  $field_group->bundle = 'basic_multifield';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_multifield_content_wrapper';
  $field_group->data = array(
    'label' => 'Column Wrapper 1',
    'weight' => '5',
    'children' => array(
      0 => 'field_multifield_heading',
      1 => 'field_multifield_subheading',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Column Wrapper 1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-column1 field-group-div col span-5-of-12',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column1|section|tour|default';
  $field_group->group_name = 'group_column1';
  $field_group->entity_type = 'section';
  $field_group->bundle = 'tour';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Left Column',
    'weight' => '10',
    'children' => array(
      0 => 'field_tour_thumbnail_image',
      1 => 'field_tour_visitor_info_link',
      2 => 'field_book_tour_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Left Column',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-column1 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column2_1|section|tour|default';
  $field_group->group_name = 'group_column2_1';
  $field_group->entity_type = 'section';
  $field_group->bundle = 'tour';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_column2';
  $field_group->data = array(
    'label' => 'Right Inner Column',
    'weight' => '2',
    'children' => array(
      0 => 'field_tour_description',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Right Inner Column',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-column2-1 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column2_2|section|tour|default';
  $field_group->group_name = 'group_column2_2';
  $field_group->entity_type = 'section';
  $field_group->bundle = 'tour';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_column2';
  $field_group->data = array(
    'label' => 'Right Inner Column 2',
    'weight' => '3',
    'children' => array(
      0 => 'field_ticket_prices',
      1 => 'field_tour_type',
      2 => 'field_departure',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Right Inner Column 2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-column2-2 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column2|section|basic_multifield|default';
  $field_group->group_name = 'group_column2';
  $field_group->entity_type = 'section';
  $field_group->bundle = 'basic_multifield';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_multifield_content_wrapper';
  $field_group->data = array(
    'label' => 'Column Wrapper 2',
    'weight' => '6',
    'children' => array(
      0 => 'field_multifield_text',
      1 => 'field_multifield_links',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Column Wrapper 2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-column2 field-group-div col span-7-of-12',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column2|section|tour|default';
  $field_group->group_name = 'group_column2';
  $field_group->entity_type = 'section';
  $field_group->bundle = 'tour';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Right Column',
    'weight' => '10',
    'children' => array(
      0 => 'field_tour_subtitle',
      1 => 'title',
      2 => 'group_column2_1',
      3 => 'group_column2_2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Right Column',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-column2 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_home_slider_container|section|homepage_slider|default';
  $field_group->group_name = 'group_home_slider_container';
  $field_group->entity_type = 'section';
  $field_group->bundle = 'homepage_slider';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Slider Container',
    'weight' => '2',
    'children' => array(
      0 => 'group_slider_text',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Slider Container',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-home-slider-container field-group-div max-container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_info|section|tour|form';
  $field_group->group_name = 'group_main_info';
  $field_group->entity_type = 'section';
  $field_group->bundle = 'tour';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_tour_description',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-main-info field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_multifield_container|section|basic_multifield|default';
  $field_group->group_name = 'group_multifield_container';
  $field_group->entity_type = 'section';
  $field_group->bundle = 'basic_multifield';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Multifield Container',
    'weight' => '1',
    'children' => array(
      0 => 'group_multifield_content_wrapper',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Multifield Container',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-multifield-container field-group-div max-container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_multifield_content_wrapper|section|basic_multifield|default';
  $field_group->group_name = 'group_multifield_content_wrapper';
  $field_group->entity_type = 'section';
  $field_group->bundle = 'basic_multifield';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_multifield_container';
  $field_group->data = array(
    'label' => 'Multifield Content Wrapper',
    'weight' => '4',
    'children' => array(
      0 => 'group_column1',
      1 => 'group_column2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Multifield Content Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-multifield-content-wrapper field-group-div section-wrap',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_slider_screen_overlay|section|homepage_slider|default';
  $field_group->group_name = 'group_slider_screen_overlay';
  $field_group->entity_type = 'section';
  $field_group->bundle = 'homepage_slider';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Screen Overlay',
    'weight' => '1',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Screen Overlay',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-slider-screen-overlay field-group-div overlay',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_slider_text|section|homepage_slider|default';
  $field_group->group_name = 'group_slider_text';
  $field_group->entity_type = 'section';
  $field_group->bundle = 'homepage_slider';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_home_slider_container';
  $field_group->data = array(
    'label' => 'Slider Text',
    'weight' => '2',
    'children' => array(
      0 => 'field_homepage_slider_link',
      1 => 'field_homepage_slider_sub_headin',
      2 => 'field_homepage_slider_main_headi',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Slider Text',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-slider-text field-group-div section-wrap',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Column Wrapper 1');
  t('Column Wrapper 2');
  t('Left Column');
  t('Main Info');
  t('Multifield Container');
  t('Multifield Content Wrapper');
  t('Right Column');
  t('Right Inner Column');
  t('Right Inner Column 2');
  t('Screen Overlay');
  t('Slider Container');
  t('Slider Text');

  return $field_groups;
}
