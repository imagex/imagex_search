<?php
/**
 * @file
 * imagex_search_permissions.features.inc
 */

/**
 * Implements hook_user_default_permissions_alter().
 */
function imagex_search_permissions_user_default_permissions_alter(&$data) {
  if (isset($data['search content'])) {
    $data['search content']['roles']['anonymous user'] = 'anonymous user'; /* WAS: '' */
    $data['search content']['roles']['authenticated user'] = 'authenticated user'; /* WAS: '' */
  }
  if (isset($data['use advanced search'])) {
    $data['use advanced search']['roles']['anonymous user'] = 'anonymous user'; /* WAS: '' */
    $data['use advanced search']['roles']['authenticated user'] = 'authenticated user'; /* WAS: '' */
  }
}
