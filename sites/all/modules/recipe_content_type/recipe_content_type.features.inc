<?php
/**
 * @file
 * recipe_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function recipe_content_type_node_info() {
  $items = array(
    'recipes' => array(
      'name' => t('Recipes'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Recipe Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
