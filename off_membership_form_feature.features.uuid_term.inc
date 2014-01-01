<?php
/**
 * @file
 * off_membership_form_feature.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function off_membership_form_feature_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Full',
    'description' => 'Full membership
',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '797f4f89-b88a-4041-90d0-3614fb1c7056',
    'vocabulary_machine_name' => 'membership_type',
    'field_mf_amount' => array(
      'und' => array(
        0 => array(
          'amount' => '50.00',
          'currency' => 'AUD',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Friend',
    'description' => 'Friend membership
',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'e5a37e02-477d-453c-94a2-6ebacd366bf1',
    'vocabulary_machine_name' => 'membership_type',
    'field_mf_amount' => array(
      'und' => array(
        0 => array(
          'amount' => '30.00',
          'currency' => 'AUD',
        ),
      ),
    ),
  );
  return $terms;
}
