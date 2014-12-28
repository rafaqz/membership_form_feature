<?php
/**
 * @file
 * membership_form_feature.features.inc
 */

/**
 * Implements hook_views_api().
 */
function membership_form_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function membership_form_feature_default_entityform_type() {
  $items = array();
  $items['membership_form'] = entity_import('entityform_type', '{
    "type" : "membership_form",
    "label" : "Membership Form",
    "data" : {
      "draftable" : 0,
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submission_rules" : [],
      "validation_rules" : [],
      "submit_button_text" : "",
      "submission_page_title" : "Thankyou. Your membership application was successful.",
      "submission_text" : { "value" : "", "format" : "full_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "membership_entityforms",
      "user_submissions_view" : "user_entityforms",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "3" : "3", "5" : "5", "4" : "4" },
      "resubmit_action" : "new",
      "access_rules" : [],
      "redirect_path" : "membership\\/pay",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003EMembership Application \\u2013 Open Food Foundation\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : { "submit" : {
        "source" : "eform\\/submit\\/membership-form",
        "alias" : "membership",
        "language" : "und"
      }
    }
  }');
  return $items;
}
