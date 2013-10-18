<?php
/**
 * @file
 * imagex_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function imagex_search_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_view_modes';
  $strongarm->value = array(
    'node' => array(
      'search_result_search_api' => array(
        'label' => 'Search Result (Search API)',
        'custom settings' => 1,
      ),
    ),
  );
  $export['entity_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_facets_search_ids';
  $strongarm->value = array(
    'default_node_index' => array(
      'search_api_views:search_page_test:page' => 'search_api_views:search_page_test:page',
      'search_api_page:search-test' => 'search_api_page:search-test',
      'search_api_views:imagex_search_node:panel_pane_1' => 'search_api_views:imagex_search_node:panel_pane_1',
    ),
  );
  $export['search_api_facets_search_ids'] = $strongarm;

  return $export;
}
