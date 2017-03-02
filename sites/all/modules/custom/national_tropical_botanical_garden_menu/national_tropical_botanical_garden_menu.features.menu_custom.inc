<?php
/**
 * @file
 * national_tropical_botanical_garden_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function national_tropical_botanical_garden_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: features.
  $menus['features'] = array(
    'menu_name' => 'features',
    'title' => 'Features',
    'description' => 'Menu items for any enabled features.',
  );
  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
  );
  // Exported menu: menu-be-involved.
  $menus['menu-be-involved'] = array(
    'menu_name' => 'menu-be-involved',
    'title' => 'Be Involved',
    'description' => '',
  );
  // Exported menu: menu-breadfruit.
  $menus['menu-breadfruit'] = array(
    'menu_name' => 'menu-breadfruit',
    'title' => 'Breadfruit',
    'description' => '',
  );
  // Exported menu: menu-gardens.
  $menus['menu-gardens'] = array(
    'menu_name' => 'menu-gardens',
    'title' => 'Gardens',
    'description' => '',
  );
  // Exported menu: menu-gardens-2.
  $menus['menu-gardens-2'] = array(
    'menu_name' => 'menu-gardens-2',
    'title' => 'Gardens 2',
    'description' => '',
  );
  // Exported menu: menu-header-actions.
  $menus['menu-header-actions'] = array(
    'menu_name' => 'menu-header-actions',
    'title' => 'Header Actions Menu',
    'description' => '',
  );
  // Exported menu: menu-let-s-connect.
  $menus['menu-let-s-connect'] = array(
    'menu_name' => 'menu-let-s-connect',
    'title' => 'Let\'s Connect',
    'description' => '',
  );
  // Exported menu: menu-research-tools.
  $menus['menu-research-tools'] = array(
    'menu_name' => 'menu-research-tools',
    'title' => 'Research Tools',
    'description' => '',
  );
  // Exported menu: navigation.
  $menus['navigation'] = array(
    'menu_name' => 'navigation',
    'title' => 'Navigation',
    'description' => 'The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.',
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Be Involved');
  t('Breadfruit');
  t('Features');
  t('Gardens');
  t('Gardens 2');
  t('Header Actions Menu');
  t('Let\'s Connect');
  t('Main menu');
  t('Management');
  t('Menu items for any enabled features.');
  t('Navigation');
  t('Research Tools');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The <em>Management</em> menu contains links for administrative tasks.');
  t('The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('User menu');

  return $menus;
}
