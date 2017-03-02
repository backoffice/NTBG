<?php
/**
 * @file
 * national_tropical_botanical_garden_eck_section.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function national_tropical_botanical_garden_eck_section_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_eck_bundle_info().
 */
function national_tropical_botanical_garden_eck_section_eck_bundle_info() {
  $items = array(
    'section_basic_multifield' => array(
      'machine_name' => 'section_basic_multifield',
      'entity_type' => 'section',
      'name' => 'basic_multifield',
      'label' => 'Basic Multifield',
      'config' => array(),
    ),
    'section_complex_multifield' => array(
      'machine_name' => 'section_complex_multifield',
      'entity_type' => 'section',
      'name' => 'complex_multifield',
      'label' => 'complex multifield',
      'config' => array(),
    ),
    'section_homepage_slider' => array(
      'machine_name' => 'section_homepage_slider',
      'entity_type' => 'section',
      'name' => 'homepage_slider',
      'label' => 'Homepage Slider',
      'config' => array(),
    ),
    'section_long_text' => array(
      'machine_name' => 'section_long_text',
      'entity_type' => 'section',
      'name' => 'long_text',
      'label' => 'Long Text',
      'config' => array(),
    ),
    'section_project' => array(
      'machine_name' => 'section_project',
      'entity_type' => 'section',
      'name' => 'project',
      'label' => 'Project',
      'config' => array(
        'managed_properties' => array(
          'title' => 'title',
          'created' => 0,
          'changed' => 0,
        ),
      ),
    ),
    'section_slideshow' => array(
      'machine_name' => 'section_slideshow',
      'entity_type' => 'section',
      'name' => 'slideshow',
      'label' => 'Slideshow',
      'config' => array(),
    ),
    'section_tour' => array(
      'machine_name' => 'section_tour',
      'entity_type' => 'section',
      'name' => 'tour',
      'label' => 'Tour',
      'config' => array(
        'managed_properties' => array(
          'title' => 'title',
          'created' => 0,
          'changed' => 0,
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function national_tropical_botanical_garden_eck_section_eck_entity_type_info() {
  $items = array(
    'section' => array(
      'name' => 'section',
      'label' => 'Section',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
        'changed' => array(
          'label' => 'Changed',
          'type' => 'integer',
          'behavior' => 'changed',
        ),
      ),
    ),
  );
  return $items;
}
