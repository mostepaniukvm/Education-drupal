<?php
/**
 * @file
 * taxonomy_vocabularies.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function taxonomy_vocabularies_taxonomy_default_vocabularies() {
  return array(
    'genre_of_films' => array(
      'name' => 'Genre of films',
      'machine_name' => 'genre_of_films',
      'description' => 'Films genres list',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => 'Use tags to group articles on similar topics into categories.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
