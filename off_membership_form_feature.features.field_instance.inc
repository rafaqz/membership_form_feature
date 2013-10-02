<?php
/**
 * @file
 * off_membership_form_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function off_membership_form_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entityform-membership_form-field_mf_address'
  $field_instances['entityform-membership_form-field_mf_address'] = array(
    'bundle' => 'membership_form',
    'default_value' => array(
      0 => array(
        'element_key' => 'entityform|membership_form|field_mf_address|und|0',
        'thoroughfare' => '',
        'premise' => '',
        'locality' => '',
        'country' => 'AF',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_mf_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(),
        'format_handlers' => array(
          'address' => 'address',
          'organisation' => 'organisation',
          'name-oneline' => 'name-oneline',
          'address-hide-country' => 0,
          'name-full' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'entityform-membership_form-field_mf_email'
  $field_instances['entityform-membership_form-field_mf_email'] = array(
    'bundle' => 'membership_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_mf_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'entityform-membership_form-field_mf_payment'
  $field_instances['entityform-membership_form-field_mf_payment'] = array(
    'bundle' => 'membership_form',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => NULL,
        'settings' => array(),
        'type' => 'paymentreference',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_mf_payment',
    'label' => 'Payment',
    'required' => 0,
    'settings' => array(
      'amount' => 0,
      'currency_code' => 'AUD',
      'description' => 'Pay for your membership',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paymentreference',
      'settings' => array(),
      'type' => 'paymentreference',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'entityform-membership_form-field_mf_subscription_type'
  $field_instances['entityform-membership_form-field_mf_subscription_type'] = array(
    'bundle' => 'membership_form',
    'default_value' => array(
      0 => array(
        'tid' => 2,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_mf_subscription_type',
    'label' => 'Subscription Type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Email');
  t('Payment');
  t('Subscription Type');

  return $field_instances;
}
