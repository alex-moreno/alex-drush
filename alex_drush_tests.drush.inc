<?php
/**
 * @file
 * Set of Drush commands for rmg_track_and_trace_integration.
 */

/**
 * Implements hook_drush_command().
 */
function alex_drush_tests_drush_command() {
  $items['alexdrush'] = array(
    'description' => dt('Generate some random command'),
    'arguments' => array(
    ),
    'aliases' => array('alexdrush'),
  );

  return $items;
}

/**
 * Test some commands.
 */
function drush_alex_drush_tests_alexdrush() {
  drush_print('Testing.');

  $account_menu = menu_link_load('2817');
  print_r($account_menu);
}
