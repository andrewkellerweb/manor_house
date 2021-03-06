<?php
/**
 * @file
 * mh_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mh_config_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function mh_config_image_default_styles() {
  $styles = array();

  // Exported image style: 200x135.
  $styles['200x135'] = array(
    'name' => '200x135',
    'label' => '200x135',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 135,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 235x125.
  $styles['235x125'] = array(
    'name' => '235x125',
    'label' => '235x125',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 235,
          'height' => 125,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
