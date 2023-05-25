<?php

/**
 * @file
 * Lists available colors and color schemes for the dgi_i8_base theme.
 */

use Drupal\bootstrap\Bootstrap;

$info = [
  // Available colors and color labels used in theme.
  'fields' => [
    'base-color' => t('Primary color'),
    'secondary-color' => t('Secondary color'),
    'tertiary-color' => t('Tertiary color'),
    'gradient-color-start' => t('Front gradient (Begin)'),
    'gradient-color-end' => t('Front gradient (end)'),
    'focus-outline-color' => t('Focus outline color'),
  ],
  // Pre-defined color schemes.
  'schemes' => [
    'default' => [
      'title' => t('DGI Base (default)'),
      'colors' => [
        'base-color' => '#2766c6',
        'secondary-color' => '#2766c6',
        'tertiary-color' => '#2766c6',
        'gradient-color-start' => '#2F3234',
        'gradient-color-end' => '#2766c6',
        'focus-outline-color' => '#FFFFFF',
      ],
    ],
  ],

  // Files to copy.
  'copy' => [
    'logo.svg',
  ],

  // Gradient definitions.
  'gradients' => [
    [
      // (x, y, width, height).
      'dimension' => [0, 0, 0, 0],
      // Direction of gradient ('vertical' or 'horizontal').
      'direction' => 'vertical',
      // Keys of colors to use for the gradient.
      'colors' => ['base-color', 'grayscale-base'],
    ],
  ],

  // Preview files.
  'preview_library' => 'dgi_i8_base/color.preview',
  'preview_html' => 'color/preview.html',

  // Attachments.
  '#attached' => [
    'drupalSettings' => [
      'color' => [
        // Put the logo path into JavaScript for the live preview.
        'logo' => Bootstrap::getTheme()->getSetting('logo.url'),
      ],
    ],
  ],
];
