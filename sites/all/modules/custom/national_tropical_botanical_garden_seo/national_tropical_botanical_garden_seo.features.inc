<?php
/**
 * @file
 * national_tropical_botanical_garden_seo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function national_tropical_botanical_garden_seo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
