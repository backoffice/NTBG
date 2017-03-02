<?php
/**
 * @file
 * national_tropical_botanical_garden_users.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function national_tropical_botanical_garden_users_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access security review list'.
  $permissions['access security review list'] = array(
    'name' => 'access security review list',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'security_review',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer background image'.
  $permissions['administer background image'] = array(
    'name' => 'administer background image',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bg_image',
  );

  // Exported permission: 'administer block classes'.
  $permissions['administer block classes'] = array(
    'name' => 'administer block classes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block_class',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer entity view modes'.
  $permissions['administer entity view modes'] = array(
    'name' => 'administer entity view modes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entity_view_mode',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer fields'.
  $permissions['administer fields'] = array(
    'name' => 'administer fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer flexslider'.
  $permissions['administer flexslider'] = array(
    'name' => 'administer flexslider',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flexslider',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer menu attributes'.
  $permissions['administer menu attributes'] = array(
    'name' => 'administer menu attributes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_attributes',
  );

  // Exported permission: 'administer menu fields'.
  $permissions['administer menu fields'] = array(
    'name' => 'administer menu fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_fields',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer om maximenu'.
  $permissions['administer om maximenu'] = array(
    'name' => 'administer om maximenu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'om_maximenu',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer quicktabs'.
  $permissions['administer quicktabs'] = array(
    'name' => 'administer quicktabs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'quicktabs',
  );

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'redirect',
  );

  // Exported permission: 'administer responsive menus'.
  $permissions['administer responsive menus'] = array(
    'name' => 'administer responsive menus',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'responsive_menus',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create breadfruit_interior_page content'.
  $permissions['create breadfruit_interior_page content'] = array(
    'name' => 'create breadfruit_interior_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create breadfruit_landing_page content'.
  $permissions['create breadfruit_landing_page content'] = array(
    'name' => 'create breadfruit_landing_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create event content'.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create garden_interior_page content'.
  $permissions['create garden_interior_page content'] = array(
    'name' => 'create garden_interior_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create garden_landing_page content'.
  $permissions['create garden_landing_page content'] = array(
    'name' => 'create garden_landing_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create homepage content'.
  $permissions['create homepage content'] = array(
    'name' => 'create homepage content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create news content'.
  $permissions['create news content'] = array(
    'name' => 'create news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any breadfruit_interior_page content'.
  $permissions['delete any breadfruit_interior_page content'] = array(
    'name' => 'delete any breadfruit_interior_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any breadfruit_landing_page content'.
  $permissions['delete any breadfruit_landing_page content'] = array(
    'name' => 'delete any breadfruit_landing_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any event content'.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any garden_interior_page content'.
  $permissions['delete any garden_interior_page content'] = array(
    'name' => 'delete any garden_interior_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any garden_landing_page content'.
  $permissions['delete any garden_landing_page content'] = array(
    'name' => 'delete any garden_landing_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any homepage content'.
  $permissions['delete any homepage content'] = array(
    'name' => 'delete any homepage content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any news content'.
  $permissions['delete any news content'] = array(
    'name' => 'delete any news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own breadfruit_interior_page content'.
  $permissions['delete own breadfruit_interior_page content'] = array(
    'name' => 'delete own breadfruit_interior_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own breadfruit_landing_page content'.
  $permissions['delete own breadfruit_landing_page content'] = array(
    'name' => 'delete own breadfruit_landing_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own event content'.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own garden_interior_page content'.
  $permissions['delete own garden_interior_page content'] = array(
    'name' => 'delete own garden_interior_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own garden_landing_page content'.
  $permissions['delete own garden_landing_page content'] = array(
    'name' => 'delete own garden_landing_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own homepage content'.
  $permissions['delete own homepage content'] = array(
    'name' => 'delete own homepage content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own news content'.
  $permissions['delete own news content'] = array(
    'name' => 'delete own news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in event_type'.
  $permissions['delete terms in event_type'] = array(
    'name' => 'delete terms in event_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in garden'.
  $permissions['delete terms in garden'] = array(
    'name' => 'delete terms in garden',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in news_type'.
  $permissions['delete terms in news_type'] = array(
    'name' => 'delete terms in news_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in site_type'.
  $permissions['delete terms in site_type'] = array(
    'name' => 'delete terms in site_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tour_type'.
  $permissions['delete terms in tour_type'] = array(
    'name' => 'delete terms in tour_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'eck add bundles'.
  $permissions['eck add bundles'] = array(
    'name' => 'eck add bundles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add entities'.
  $permissions['eck add entities'] = array(
    'name' => 'eck add entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add entity types'.
  $permissions['eck add entity types'] = array(
    'name' => 'eck add entity types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add section basic_multifield entities'.
  $permissions['eck add section basic_multifield entities'] = array(
    'name' => 'eck add section basic_multifield entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck add section bundles'.
  $permissions['eck add section bundles'] = array(
    'name' => 'eck add section bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck add section complex_multifield entities'.
  $permissions['eck add section complex_multifield entities'] = array(
    'name' => 'eck add section complex_multifield entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck add section homepage_slider entities'.
  $permissions['eck add section homepage_slider entities'] = array(
    'name' => 'eck add section homepage_slider entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck add section long_text entities'.
  $permissions['eck add section long_text entities'] = array(
    'name' => 'eck add section long_text entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck add section project entities'.
  $permissions['eck add section project entities'] = array(
    'name' => 'eck add section project entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck add section slideshow entities'.
  $permissions['eck add section slideshow entities'] = array(
    'name' => 'eck add section slideshow entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck add section tour entities'.
  $permissions['eck add section tour entities'] = array(
    'name' => 'eck add section tour entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer bundles'.
  $permissions['eck administer bundles'] = array(
    'name' => 'eck administer bundles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer entities'.
  $permissions['eck administer entities'] = array(
    'name' => 'eck administer entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer entity types'.
  $permissions['eck administer entity types'] = array(
    'name' => 'eck administer entity types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer section basic_multifield entities'.
  $permissions['eck administer section basic_multifield entities'] = array(
    'name' => 'eck administer section basic_multifield entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer section bundles'.
  $permissions['eck administer section bundles'] = array(
    'name' => 'eck administer section bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer section complex_multifield entities'.
  $permissions['eck administer section complex_multifield entities'] = array(
    'name' => 'eck administer section complex_multifield entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer section homepage_slider entities'.
  $permissions['eck administer section homepage_slider entities'] = array(
    'name' => 'eck administer section homepage_slider entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer section long_text entities'.
  $permissions['eck administer section long_text entities'] = array(
    'name' => 'eck administer section long_text entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer section project entities'.
  $permissions['eck administer section project entities'] = array(
    'name' => 'eck administer section project entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer section slideshow entities'.
  $permissions['eck administer section slideshow entities'] = array(
    'name' => 'eck administer section slideshow entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer section tour entities'.
  $permissions['eck administer section tour entities'] = array(
    'name' => 'eck administer section tour entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete bundles'.
  $permissions['eck delete bundles'] = array(
    'name' => 'eck delete bundles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete entities'.
  $permissions['eck delete entities'] = array(
    'name' => 'eck delete entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete entity types'.
  $permissions['eck delete entity types'] = array(
    'name' => 'eck delete entity types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete section basic_multifield entities'.
  $permissions['eck delete section basic_multifield entities'] = array(
    'name' => 'eck delete section basic_multifield entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete section bundles'.
  $permissions['eck delete section bundles'] = array(
    'name' => 'eck delete section bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete section complex_multifield entities'.
  $permissions['eck delete section complex_multifield entities'] = array(
    'name' => 'eck delete section complex_multifield entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete section homepage_slider entities'.
  $permissions['eck delete section homepage_slider entities'] = array(
    'name' => 'eck delete section homepage_slider entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete section long_text entities'.
  $permissions['eck delete section long_text entities'] = array(
    'name' => 'eck delete section long_text entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete section project entities'.
  $permissions['eck delete section project entities'] = array(
    'name' => 'eck delete section project entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete section slideshow entities'.
  $permissions['eck delete section slideshow entities'] = array(
    'name' => 'eck delete section slideshow entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete section tour entities'.
  $permissions['eck delete section tour entities'] = array(
    'name' => 'eck delete section tour entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit bundles'.
  $permissions['eck edit bundles'] = array(
    'name' => 'eck edit bundles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit entities'.
  $permissions['eck edit entities'] = array(
    'name' => 'eck edit entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit entity types'.
  $permissions['eck edit entity types'] = array(
    'name' => 'eck edit entity types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit section basic_multifield entities'.
  $permissions['eck edit section basic_multifield entities'] = array(
    'name' => 'eck edit section basic_multifield entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit section bundles'.
  $permissions['eck edit section bundles'] = array(
    'name' => 'eck edit section bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit section complex_multifield entities'.
  $permissions['eck edit section complex_multifield entities'] = array(
    'name' => 'eck edit section complex_multifield entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit section homepage_slider entities'.
  $permissions['eck edit section homepage_slider entities'] = array(
    'name' => 'eck edit section homepage_slider entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit section long_text entities'.
  $permissions['eck edit section long_text entities'] = array(
    'name' => 'eck edit section long_text entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit section project entities'.
  $permissions['eck edit section project entities'] = array(
    'name' => 'eck edit section project entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit section slideshow entities'.
  $permissions['eck edit section slideshow entities'] = array(
    'name' => 'eck edit section slideshow entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit section tour entities'.
  $permissions['eck edit section tour entities'] = array(
    'name' => 'eck edit section tour entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list bundles'.
  $permissions['eck list bundles'] = array(
    'name' => 'eck list bundles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list entities'.
  $permissions['eck list entities'] = array(
    'name' => 'eck list entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list entity types'.
  $permissions['eck list entity types'] = array(
    'name' => 'eck list entity types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list section basic_multifield entities'.
  $permissions['eck list section basic_multifield entities'] = array(
    'name' => 'eck list section basic_multifield entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list section bundles'.
  $permissions['eck list section bundles'] = array(
    'name' => 'eck list section bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list section complex_multifield entities'.
  $permissions['eck list section complex_multifield entities'] = array(
    'name' => 'eck list section complex_multifield entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list section homepage_slider entities'.
  $permissions['eck list section homepage_slider entities'] = array(
    'name' => 'eck list section homepage_slider entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list section long_text entities'.
  $permissions['eck list section long_text entities'] = array(
    'name' => 'eck list section long_text entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list section project entities'.
  $permissions['eck list section project entities'] = array(
    'name' => 'eck list section project entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list section slideshow entities'.
  $permissions['eck list section slideshow entities'] = array(
    'name' => 'eck list section slideshow entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list section tour entities'.
  $permissions['eck list section tour entities'] = array(
    'name' => 'eck list section tour entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view entities'.
  $permissions['eck view entities'] = array(
    'name' => 'eck view entities',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view section basic_multifield entities'.
  $permissions['eck view section basic_multifield entities'] = array(
    'name' => 'eck view section basic_multifield entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view section bundles'.
  $permissions['eck view section bundles'] = array(
    'name' => 'eck view section bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view section complex_multifield entities'.
  $permissions['eck view section complex_multifield entities'] = array(
    'name' => 'eck view section complex_multifield entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view section homepage_slider entities'.
  $permissions['eck view section homepage_slider entities'] = array(
    'name' => 'eck view section homepage_slider entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view section long_text entities'.
  $permissions['eck view section long_text entities'] = array(
    'name' => 'eck view section long_text entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view section project entities'.
  $permissions['eck view section project entities'] = array(
    'name' => 'eck view section project entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view section slideshow entities'.
  $permissions['eck view section slideshow entities'] = array(
    'name' => 'eck view section slideshow entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view section tour entities'.
  $permissions['eck view section tour entities'] = array(
    'name' => 'eck view section tour entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any breadfruit_interior_page content'.
  $permissions['edit any breadfruit_interior_page content'] = array(
    'name' => 'edit any breadfruit_interior_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any breadfruit_landing_page content'.
  $permissions['edit any breadfruit_landing_page content'] = array(
    'name' => 'edit any breadfruit_landing_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any event content'.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any garden_interior_page content'.
  $permissions['edit any garden_interior_page content'] = array(
    'name' => 'edit any garden_interior_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any garden_landing_page content'.
  $permissions['edit any garden_landing_page content'] = array(
    'name' => 'edit any garden_landing_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any homepage content'.
  $permissions['edit any homepage content'] = array(
    'name' => 'edit any homepage content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any news content'.
  $permissions['edit any news content'] = array(
    'name' => 'edit any news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own breadfruit_interior_page content'.
  $permissions['edit own breadfruit_interior_page content'] = array(
    'name' => 'edit own breadfruit_interior_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own breadfruit_landing_page content'.
  $permissions['edit own breadfruit_landing_page content'] = array(
    'name' => 'edit own breadfruit_landing_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own event content'.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own garden_interior_page content'.
  $permissions['edit own garden_interior_page content'] = array(
    'name' => 'edit own garden_interior_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own garden_landing_page content'.
  $permissions['edit own garden_landing_page content'] = array(
    'name' => 'edit own garden_landing_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own homepage content'.
  $permissions['edit own homepage content'] = array(
    'name' => 'edit own homepage content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own news content'.
  $permissions['edit own news content'] = array(
    'name' => 'edit own news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit terms in event_type'.
  $permissions['edit terms in event_type'] = array(
    'name' => 'edit terms in event_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in garden'.
  $permissions['edit terms in garden'] = array(
    'name' => 'edit terms in garden',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in news_type'.
  $permissions['edit terms in news_type'] = array(
    'name' => 'edit terms in news_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in site_type'.
  $permissions['edit terms in site_type'] = array(
    'name' => 'edit terms in site_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tour_type'.
  $permissions['edit terms in tour_type'] = array(
    'name' => 'edit terms in tour_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit webform components'.
  $permissions['edit webform components'] = array(
    'name' => 'edit webform components',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manage background images'.
  $permissions['manage background images'] = array(
    'name' => 'manage background images',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bg_image_ui',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manage section properties'.
  $permissions['manage section properties'] = array(
    'name' => 'manage section properties',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'menu edit features'.
  $permissions['menu edit features'] = array(
    'name' => 'menu edit features',
    'roles' => array(),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit main-menu'.
  $permissions['menu edit main-menu'] = array(
    'name' => 'menu edit main-menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit management'.
  $permissions['menu edit management'] = array(
    'name' => 'menu edit management',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit menu-be-involved'.
  $permissions['menu edit menu-be-involved'] = array(
    'name' => 'menu edit menu-be-involved',
    'roles' => array(),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit menu-breadfruit'.
  $permissions['menu edit menu-breadfruit'] = array(
    'name' => 'menu edit menu-breadfruit',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit menu-gardens'.
  $permissions['menu edit menu-gardens'] = array(
    'name' => 'menu edit menu-gardens',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit menu-gardens-2'.
  $permissions['menu edit menu-gardens-2'] = array(
    'name' => 'menu edit menu-gardens-2',
    'roles' => array(),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit menu-header-actions'.
  $permissions['menu edit menu-header-actions'] = array(
    'name' => 'menu edit menu-header-actions',
    'roles' => array(),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit menu-let-s-connect'.
  $permissions['menu edit menu-let-s-connect'] = array(
    'name' => 'menu edit menu-let-s-connect',
    'roles' => array(),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit menu-research-tools'.
  $permissions['menu edit menu-research-tools'] = array(
    'name' => 'menu edit menu-research-tools',
    'roles' => array(),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit navigation'.
  $permissions['menu edit navigation'] = array(
    'name' => 'menu edit navigation',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit user-menu'.
  $permissions['menu edit user-menu'] = array(
    'name' => 'menu edit user-menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'run security checks'.
  $permissions['run security checks'] = array(
    'name' => 'run security checks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'security_review',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'see menu_editor placeholder pages'.
  $permissions['see menu_editor placeholder pages'] = array(
    'name' => 'see menu_editor placeholder pages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'me_node_creation',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'submit latitude/longitude'.
  $permissions['submit latitude/longitude'] = array(
    'name' => 'submit latitude/longitude',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'location',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ctools',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view all background images'.
  $permissions['view all background images'] = array(
    'name' => 'view all background images',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bg_image',
  );

  // Exported permission: 'view location directory'.
  $permissions['view location directory'] = array(
    'name' => 'view location directory',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'location',
  );

  // Exported permission: 'view node location table'.
  $permissions['view node location table'] = array(
    'name' => 'view node location table',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'location',
  );

  // Exported permission: 'view node map'.
  $permissions['view node map'] = array(
    'name' => 'view node map',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'gmap_location',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'view user location details'.
  $permissions['view user location details'] = array(
    'name' => 'view user location details',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'gmap_location',
  );

  // Exported permission: 'view user location table'.
  $permissions['view user location table'] = array(
    'name' => 'view user location table',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'location',
  );

  // Exported permission: 'view user map'.
  $permissions['view user map'] = array(
    'name' => 'view user map',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'gmap_location',
  );

  return $permissions;
}
