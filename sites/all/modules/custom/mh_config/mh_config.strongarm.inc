<?php
/**
 * @file
 * mh_config.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mh_config_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'ember';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'availability_calendar_configurable_texts_enabled';
  $strongarm->value = 0;
  $export['availability_calendar_configurable_texts_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'availability_calendar_months_to_index';
  $strongarm->value = '13';
  $export['availability_calendar_months_to_index'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'availability_calendar_styles';
  $strongarm->value = array(
    'table' => array(
      'font-size' => 'smaller',
      'color' => '#000000',
      'background-color' => '',
      'border-width' => '1px',
      'border-color' => '000000',
    ),
    'caption' => array(
      'text-align' => 'center',
      'font-weight' => 'bold',
      'font-style' => 'inherit',
      'font-size' => 'smaller',
    ),
    'header' => array(
      'height' => '',
      'text-align' => 'center',
      'font-weight' => 'bold',
      'font-style' => 'inherit',
      'font-size' => 'inherit',
    ),
    'week_notes' => array(
      'width' => '90px',
    ),
    'days' => array(
      'width' => '28px',
      'height' => '28px',
      'text-align' => 'center',
      'vertical-align' => 'middle',
    ),
    'states' => array(
      'split-day' => '/',
      'cal-Available' => '',
      'cal-booked' => 'FF0006',
    ),
  );
  $export['availability_calendar_styles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'availability_calendar_styles_generate';
  $strongarm->value = 0;
  $export['availability_calendar_styles_generate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_availability_calendar_date_display';
  $strongarm->value = 'l j F Y';
  $export['date_format_availability_calendar_date_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_availability_calendar_date_entry';
  $strongarm->value = 'Y-n-j';
  $export['date_format_availability_calendar_date_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_availability_calendar_month_caption';
  $strongarm->value = 'F Y';
  $export['date_format_availability_calendar_month_caption'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fieldblock-node-page-default';
  $strongarm->value = array(
    'field_hero_image' => 'Hero Image',
    'field_header_image' => 'Header Image',
  );
  $export['fieldblock-node-page-default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__album';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__album'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__article';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__page';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => FALSE,
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
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__page'] = $strongarm;

  return $export;
}
