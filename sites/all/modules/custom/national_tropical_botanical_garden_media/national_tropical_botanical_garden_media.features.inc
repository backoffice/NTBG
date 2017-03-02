<?php
/**
 * @file
 * national_tropical_botanical_garden_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function national_tropical_botanical_garden_media_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function national_tropical_botanical_garden_media_image_default_styles() {
  $styles = array();

  // Exported image style: flexslider_full.
  $styles['flexslider_full'] = array(
    'effects' => array(
      0 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 500,
        ),
        'weight' => 0,
      ),
    ),
    'label' => 'flexslider_full',
  );

  // Exported image style: flexslider_thumbnail.
  $styles['flexslider_thumbnail'] = array(
    'effects' => array(
      0 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 160,
          'height' => 100,
        ),
        'weight' => 0,
      ),
    ),
    'label' => 'flexslider_thumbnail',
  );

  // Exported image style: garden_projects.
  $styles['garden_projects'] = array(
    'label' => 'Garden Projects',
    'effects' => array(),
  );

  // Exported image style: garden_vertical_callout.
  $styles['garden_vertical_callout'] = array(
    'label' => 'Garden Vertical Callout',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 410,
          'height' => 580,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: header_background_image_-_gardens.
  $styles['header_background_image_-_gardens'] = array(
    'label' => 'Header Background Image - Gardens',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1920,
          'height' => 800,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: header_background_image_-_interior.
  $styles['header_background_image_-_interior'] = array(
    'label' => 'Header Background Image - Interior',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1920,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: hero_-_large.
  $styles['hero_-_large'] = array(
    'label' => 'Hero - Large',
    'effects' => array(),
  );

  // Exported image style: homepage_gardens_background.
  $styles['homepage_gardens_background'] = array(
    'label' => 'Homepage Gardens Background',
    'effects' => array(),
  );

  // Exported image style: large.
  $styles['large'] = array(
    'label' => 'Large (480x480)',
    'effects' => array(
      0 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => 480,
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: medium.
  $styles['medium'] = array(
    'label' => 'Medium (220x220)',
    'effects' => array(
      0 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 220,
          'height' => 220,
          'upscale' => 1,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: thumbnail.
  $styles['thumbnail'] = array(
    'label' => 'Thumbnail (100x100)',
    'effects' => array(
      0 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 100,
          'height' => 100,
          'upscale' => 1,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: tour_image.
  $styles['tour_image'] = array(
    'label' => 'Tour Image',
    'effects' => array(),
  );

  return $styles;
}
