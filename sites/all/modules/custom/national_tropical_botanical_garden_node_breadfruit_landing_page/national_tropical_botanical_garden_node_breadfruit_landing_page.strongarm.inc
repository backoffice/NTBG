<?php
/**
 * @file
 * national_tropical_botanical_garden_node_breadfruit_landing_page.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function national_tropical_botanical_garden_node_breadfruit_landing_page_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_breadfruit_landing_page';
  $strongarm->value = 0;
  $export['comment_anonymous_breadfruit_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_breadfruit_landing_page';
  $strongarm->value = '1';
  $export['comment_breadfruit_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_breadfruit_landing_page';
  $strongarm->value = 1;
  $export['comment_default_mode_breadfruit_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_breadfruit_landing_page';
  $strongarm->value = '50';
  $export['comment_default_per_page_breadfruit_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_breadfruit_landing_page';
  $strongarm->value = 1;
  $export['comment_form_location_breadfruit_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_breadfruit_landing_page';
  $strongarm->value = '1';
  $export['comment_preview_breadfruit_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_breadfruit_landing_page';
  $strongarm->value = 1;
  $export['comment_subject_field_breadfruit_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__breadfruit_landing_page';
  $strongarm->value = array(
    'view_modes' => array(
      'garden_location' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'submitted_by' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__breadfruit_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_breadfruit_landing_page';
  $strongarm->value = array(
    0 => 'menu-breadfruit',
  );
  $export['menu_options_breadfruit_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_breadfruit_landing_page';
  $strongarm->value = 'menu-breadfruit:0';
  $export['menu_parent_breadfruit_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_breadfruit_landing_page';
  $strongarm->value = array(
    0 => 'revision',
  );
  $export['node_options_breadfruit_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_breadfruit_landing_page';
  $strongarm->value = '1';
  $export['node_preview_breadfruit_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_breadfruit_landing_page';
  $strongarm->value = 0;
  $export['node_submitted_breadfruit_landing_page'] = $strongarm;

  return $export;
}
