<?php
/**
 * @file
 * national_tropical_botanical_garden_node_garden_interior_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function national_tropical_botanical_garden_node_garden_interior_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function national_tropical_botanical_garden_node_garden_interior_page_node_info() {
  $items = array(
    'garden_interior_page' => array(
      'name' => t('Garden Interior Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
