<?php
/**
 * @file
 * imagex_search_permissions.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function imagex_search_permissions_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: user_permission
  $overrides["user_permission.search content.roles|anonymous user"] = 'anonymous user';
  $overrides["user_permission.search content.roles|authenticated user"] = 'authenticated user';
  $overrides["user_permission.use advanced search.roles|anonymous user"] = 'anonymous user';
  $overrides["user_permission.use advanced search.roles|authenticated user"] = 'authenticated user';

  features_alter_code('features_overrides', $overrides);

  return $overrides;
}
