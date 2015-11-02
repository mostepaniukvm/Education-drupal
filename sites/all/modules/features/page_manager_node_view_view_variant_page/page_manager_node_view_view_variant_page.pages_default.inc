<?php
/**
 * @file
 * page_manager_node_view_view_variant_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function page_manager_node_view_view_variant_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_4dfadb04-ae45-45dd-9aa6-799a0ba0eee2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'View variant page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'page' => 'page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4d10af29-b001-4043-93c8-f2fe03c211bc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ef80ce6a-883e-4d52-ade6-89a678b5aabf';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'page_view_variant-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ef80ce6a-883e-4d52-ade6-89a678b5aabf';
    $display->content['new-ef80ce6a-883e-4d52-ade6-89a678b5aabf'] = $pane;
    $display->panels['middle'][0] = 'new-ef80ce6a-883e-4d52-ade6-89a678b5aabf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ef80ce6a-883e-4d52-ade6-89a678b5aabf';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_4dfadb04-ae45-45dd-9aa6-799a0ba0eee2'] = $handler;

  return $export;
}
