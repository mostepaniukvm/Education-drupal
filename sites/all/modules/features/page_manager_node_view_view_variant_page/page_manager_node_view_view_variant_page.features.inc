<?php
/**
 * @file
 * page_manager_node_view_view_variant_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function page_manager_node_view_view_variant_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
