<?php
/**
 * @file
 * national_tropical_botanical_garden_node_garden_landing_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function national_tropical_botanical_garden_node_garden_landing_page_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_developer|node|garden_landing_page|form';
  $field_group->group_name = 'group_developer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'garden_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Developer',
    'weight' => '6',
    'children' => array(
      0 => 'field_quicktabs_block',
      1 => 'field_juicer_block',
      2 => 'field_social_block',
      3 => 'field_garden_menu',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-developer field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hero|node|garden_landing_page|default';
  $field_group->group_name = 'group_hero';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'garden_landing_page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hero',
    'weight' => '0',
    'children' => array(
      0 => 'field_garden_type',
      1 => 'field_garden_location',
      2 => 'field_book_tour_link',
      3 => 'title_field',
      4 => 'field_hero_background_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hero',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-hero field-group-div',
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
  $field_group->identifier = 'group_homepage_elements|node|garden_landing_page|form';
  $field_group->group_name = 'group_homepage_elements';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'garden_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Homepage elements',
    'weight' => '2',
    'children' => array(
      0 => 'field_explore_link',
      1 => 'field_book_tour_link',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-homepage-elements field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_landing_page|node|garden_landing_page|form';
  $field_group->group_name = 'group_landing_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'garden_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Garden Landing Page Elements',
    'weight' => '5',
    'children' => array(
      0 => 'field_history',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-landing-page field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|node|garden_landing_page|form';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'garden_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '4',
    'children' => array(
      0 => 'field_garden_location',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-location field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_info|node|garden_landing_page|form';
  $field_group->group_name = 'group_main_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'garden_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main Info',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_garden_type',
      2 => 'title_field',
      3 => 'field_garden_taxonomy',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|garden_landing_page|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'garden_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '1',
    'children' => array(
      0 => 'field_homepage_thumbnail',
      1 => 'field_hero_background_image',
      2 => 'field_map_marker_graphic',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-media field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tours|node|garden_landing_page|form';
  $field_group->group_name = 'group_tours';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'garden_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tours',
    'weight' => '3',
    'children' => array(
      0 => 'field_tours',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tours field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Developer');
  t('Garden Landing Page Elements');
  t('Hero');
  t('Homepage elements');
  t('Location');
  t('Main Info');
  t('Media');
  t('Tours');

  return $field_groups;
}
