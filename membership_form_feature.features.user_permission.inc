<?php
/**
 * @file
 * membership_form_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function membership_form_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in membership_type'.
  $permissions['add terms in membership_type'] = array(
    'name' => 'add terms in membership_type',
    'roles' => array(),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'administer entityform types'.
  $permissions['administer entityform types'] = array(
    'name' => 'administer entityform types',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'currency.currency.administer'.
  $permissions['currency.currency.administer'] = array(
    'name' => 'currency.currency.administer',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'currency',
  );

  // Exported permission: 'currency.currency_exchanger.administer'.
  $permissions['currency.currency_exchanger.administer'] = array(
    'name' => 'currency.currency_exchanger.administer',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'currency',
  );

  // Exported permission: 'currency.currency_locale_pattern.administer'.
  $permissions['currency.currency_locale_pattern.administer'] = array(
    'name' => 'currency.currency_locale_pattern.administer',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'currency',
  );

  // Exported permission: 'delete any entityform'.
  $permissions['delete any entityform'] = array(
    'name' => 'delete any entityform',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'delete own entityform'.
  $permissions['delete own entityform'] = array(
    'name' => 'delete own entityform',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'delete terms in membership_type'.
  $permissions['delete terms in membership_type'] = array(
    'name' => 'delete terms in membership_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any entityform'.
  $permissions['edit any entityform'] = array(
    'name' => 'edit any entityform',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'edit own entityform'.
  $permissions['edit own entityform'] = array(
    'name' => 'edit own entityform',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'edit terms in membership_type'.
  $permissions['edit terms in membership_type'] = array(
    'name' => 'edit terms in membership_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'payment.global.administer'.
  $permissions['payment.global.administer'] = array(
    'name' => 'payment.global.administer',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment.administer'.
  $permissions['payment.payment.administer'] = array(
    'name' => 'payment.payment.administer',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment.delete.any'.
  $permissions['payment.payment.delete.any'] = array(
    'name' => 'payment.payment.delete.any',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment.delete.own'.
  $permissions['payment.payment.delete.own'] = array(
    'name' => 'payment.payment.delete.own',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment.update.any'.
  $permissions['payment.payment.update.any'] = array(
    'name' => 'payment.payment.update.any',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment.update.own'.
  $permissions['payment.payment.update.own'] = array(
    'name' => 'payment.payment.update.own',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment.view.any'.
  $permissions['payment.payment.view.any'] = array(
    'name' => 'payment.payment.view.any',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment.view.own'.
  $permissions['payment.payment.view.own'] = array(
    'name' => 'payment.payment.view.own',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment_method.create.PayPalPaymentECPaymentMethodController'.
  $permissions['payment.payment_method.create.PayPalPaymentECPaymentMethodController'] = array(
    'name' => 'payment.payment_method.create.PayPalPaymentECPaymentMethodController',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment_method.create.PaymentMethodBasicController'.
  $permissions['payment.payment_method.create.PaymentMethodBasicController'] = array(
    'name' => 'payment.payment_method.create.PaymentMethodBasicController',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment_method.delete.any'.
  $permissions['payment.payment_method.delete.any'] = array(
    'name' => 'payment.payment_method.delete.any',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment_method.delete.own'.
  $permissions['payment.payment_method.delete.own'] = array(
    'name' => 'payment.payment_method.delete.own',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment_method.update.any'.
  $permissions['payment.payment_method.update.any'] = array(
    'name' => 'payment.payment_method.update.any',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment_method.update.own'.
  $permissions['payment.payment_method.update.own'] = array(
    'name' => 'payment.payment_method.update.own',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment_method.view.any'.
  $permissions['payment.payment_method.view.any'] = array(
    'name' => 'payment.payment_method.view.any',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment_method.view.own'.
  $permissions['payment.payment_method.view.own'] = array(
    'name' => 'payment.payment_method.view.own',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment_status.view'.
  $permissions['payment.payment_status.view'] = array(
    'name' => 'payment.payment_status.view',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.rules.administer'.
  $permissions['payment.rules.administer'] = array(
    'name' => 'payment.rules.administer',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'show format selection for entityform'.
  $permissions['show format selection for entityform'] = array(
    'name' => 'show format selection for entityform',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for payment'.
  $permissions['show format selection for payment'] = array(
    'name' => 'show format selection for payment',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'view any entityform'.
  $permissions['view any entityform'] = array(
    'name' => 'view any entityform',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'view own entityform'.
  $permissions['view own entityform'] = array(
    'name' => 'view own entityform',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'entityform',
  );

  return $permissions;
}
