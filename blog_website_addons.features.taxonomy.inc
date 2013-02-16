<?php
/**
 * @file
 * blog_website_addons.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function blog_website_addons_taxonomy_default_vocabularies() {
  return array(
    'blog_tags' => array(
      'name' => 'Blog-Tags',
      'machine_name' => 'blog_tags',
      'description' => 'one-lingual blog tags',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '1',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
