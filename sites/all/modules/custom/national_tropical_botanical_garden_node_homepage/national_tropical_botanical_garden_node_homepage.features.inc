<?php
/**
 * @file
 * national_tropical_botanical_garden_node_homepage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function national_tropical_botanical_garden_node_homepage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function national_tropical_botanical_garden_node_homepage_node_info() {
  $items = array(
    'homepage' => array(
      'name' => t('Homepage'),
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
