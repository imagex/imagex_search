<?php
/**
 * @file
 * imagex_search_db.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function imagex_search_db_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: search_api_index
  $overrides["search_api_index.default_node_index.server"] = 'database_search_server';

 return $overrides;
}
