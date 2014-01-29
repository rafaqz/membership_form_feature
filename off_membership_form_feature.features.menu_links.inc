<?php
/**
 * @file
 * off_membership_form_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function off_membership_form_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_membership:eform/submit/membership-form
  $menu_links['main-menu_membership:eform/submit/membership-form'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'eform/submit/membership-form',
    'router_path' => 'eform/submit/%',
    'link_title' => 'Membership',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_membership:eform/submit/membership-form',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Membership');


  return $menu_links;
}
