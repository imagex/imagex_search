<?php
/**
 * @file
 * imagex_search_db.features.inc
 */

/**
 * Implements hook_default_search_api_index_alter().
 */
function imagex_search_db_default_search_api_index_alter(&$data) {
  if (isset($data['default_node_index'])) {
    $data['default_node_index']->server = 'database_search_server'; /* WAS: 'null' */
  }
}

/**
 * Implements hook_default_search_api_server().
 */
function imagex_search_db_default_search_api_server() {
  $items = array();
  $items['database_search_server'] = entity_import('search_api_server', '{
    "name" : "Database Search Server",
    "machine_name" : "database_search_server",
    "description" : "Basic database search server for testing.",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "indexes" : { "default_node_index" : {
          "type" : {
            "table" : "search_api_db_default_node_index",
            "column" : "type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_default_node_index",
            "column" : "title",
            "type" : "string",
            "boost" : "1.0"
          },
          "status" : {
            "table" : "search_api_db_default_node_index",
            "column" : "status",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_default_node_index",
            "column" : "created",
            "type" : "date",
            "boost" : "1.0"
          },
          "author" : {
            "table" : "search_api_db_default_node_index",
            "column" : "author",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_radioactivity" : {
            "table" : "search_api_db_default_node_index",
            "column" : "field_radioactivity",
            "type" : "decimal",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_default_node_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "search_api_aggregation_1" : {
            "table" : "search_api_db_default_node_index_search_api_aggregation_1",
            "type" : "text",
            "boost" : "0.5"
          },
          "search_api_aggregation_2" : {
            "table" : "search_api_db_default_node_index_search_api_aggregation_2",
            "type" : "text",
            "boost" : "0.8"
          },
          "search_api_access_node" : {
            "table" : "search_api_db_default_node_index_search_api_access_node",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "author:name" : {
            "table" : "search_api_db_default_node_index_author_name",
            "type" : "text",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_default_node_index_body_value",
            "type" : "text",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
