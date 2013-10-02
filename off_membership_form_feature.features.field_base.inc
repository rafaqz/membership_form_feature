<?php
/**
 * @file
 * off_membership_form_feature.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function off_membership_form_feature_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_mf_address'
  $field_bases['field_mf_address'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_mf_address',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'addressfield',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'addressfield',
  );

  // Exported field_base: 'field_mf_email'
  $field_bases['field_mf_email'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_mf_email',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'email',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'email',
  );

  // Exported field_base: 'field_mf_payment'
  $field_bases['field_mf_payment'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_mf_payment',
    'foreign keys' => array(),
    'indexes' => array(
      'pid' => array(
        0 => 'pid',
      ),
    ),
    'locked' => 0,
    'module' => 'paymentreference',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'paymentreference',
  );

  // Exported field_base: 'field_mf_subscription_type'
  $field_bases['field_mf_subscription_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_mf_subscription_type',
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'subscription_types',
          'parent' => 0,
        ),
      ),
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
