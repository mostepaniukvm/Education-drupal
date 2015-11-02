<?php
/**
 * @file
 * page_manager_page_genre.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function page_manager_page_genre_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
