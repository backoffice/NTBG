<?php
/**
 * @file
 * national_tropical_botanical_garden_media.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function national_tropical_botanical_garden_media_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_fallback_format';
  $strongarm->value = 'plain_text';
  $export['filter_fallback_format'] = $strongarm;

  return $export;
}
