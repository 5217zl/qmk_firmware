#include "is3741.h"

# ifdef RGB_MATRIX_ENABLE
const is31_led __flash g_is31_leds[DRIVER_LED_TOTAL] = {
/* Refer to IS31 manual for these locations
 *   driver
 *   |  R location
 *   |  |       G location
 *   |  |       |       B location
 *   |  |       |       | */
  { 0 , CS3_SW1, CS2_SW1, CS1_SW1}, /* RGB1 */
  { 0 , CS3_SW2, CS2_SW2, CS1_SW2}, /* RGB2 */
  { 0 , CS3_SW3, CS2_SW3, CS1_SW3}, /* RGB3 */
  { 0 , CS3_SW4, CS2_SW4, CS1_SW4}, /* RGB4 */
  { 0 , CS3_SW5, CS2_SW5, CS1_SW5}, /* RGB5 */
  { 0 , CS3_SW6, CS2_SW6, CS1_SW6}, /* RGB6 */
  { 0 , CS3_SW7, CS2_SW7, CS1_SW7}, /* RGB7 */
  { 0 , CS3_SW8, CS2_SW8, CS1_SW8}, /* RGB8 */
  { 0 , CS3_SW9, CS2_SW9, CS1_SW9}, /* RGB9 */
  { 0 , CS6_SW1, CS5_SW1, CS4_SW1}, /* RGB10 */
  { 0 , CS6_SW2, CS5_SW2, CS4_SW2}, /* RGB11 */
  { 0 , CS6_SW3, CS5_SW3, CS4_SW3}, /* RGB12 */
  { 0 , CS6_SW4, CS5_SW4, CS4_SW4}, /* RGB13 */
  { 0 , CS6_SW5, CS5_SW5, CS4_SW5}, /* RGB14 */
  { 0 , CS6_SW6, CS5_SW6, CS4_SW6}, /* RGB15 */
  { 0 , CS6_SW7, CS5_SW7, CS4_SW7}, /* RGB16 */
  { 0 , CS6_SW8, CS5_SW8, CS4_SW8}, /* RGB17 */
  { 0 , CS6_SW9, CS5_SW9, CS4_SW9}, /* RGB18 */
  { 0 , CS9_SW1, CS8_SW1, CS7_SW1}, /* RGB19 */
  { 0 , CS9_SW2, CS8_SW2, CS7_SW2}, /* RGB20 */
  { 0 , CS9_SW3, CS8_SW3, CS7_SW3}, /* RGB21 */
  { 0 , CS9_SW4, CS8_SW4, CS7_SW4}, /* RGB22 */
  { 0 , CS9_SW5, CS8_SW5, CS7_SW5}, /* RGB23 */
  { 0 , CS9_SW6, CS8_SW6, CS7_SW6}, /* RGB24 */
  { 0 , CS9_SW7, CS8_SW7, CS7_SW7}, /* RGB25 */
  { 0 , CS9_SW8, CS8_SW8, CS7_SW8}, /* RGB26 */
  { 0 , CS9_SW9, CS8_SW9, CS7_SW9}, /* RGB27 */
};

led_config_t g_led_config = {
  {
    // {  0,  1,  2,  3,  4,  5,  6,  7,  8 },
    // {  9, 10, 11, 12, 13, 14, 15, 16, 17 },
    // { 18, 19, 20, 21, 22, 23, 24, 25, 26 }
    { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
    { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
  }, {
    {0, 0},  {28, 0},  {56, 0},  {84, 0},  {112, 0},  {140, 0},  {168, 0},  {196, 0},  {224, 0},
    {0, 32}, {28, 32}, {56, 32}, {84, 32}, {112, 32}, {140, 32}, {168, 32}, {196, 32}, {224, 32},
    {0, 64}, {28, 64}, {56, 64}, {84, 64}, {112, 64}, {140, 64}, {168, 64}, {196, 64}, {224, 64},
  }, {
    // 4, 4, 4, 4, 4, 4, 4, 4, 4,
    // 4, 4, 4, 4, 4, 4, 4, 4, 4,
    // 4, 4, 4, 4, 4, 4, 4, 4, 4,
    2, 2, 2, 2, 2, 2, 2, 2, 2,
    2, 2, 2, 2, 2, 2, 2, 2, 2,
    2, 2, 2, 2, 2, 2, 2, 2, 2,
  }
};

void suspend_power_down_kb(void) {
  rgb_matrix_set_suspend_state(true);
  suspend_power_down_user();
};

void suspend_wakeup_init_kb(void) {
  rgb_matrix_set_suspend_state(false);
  suspend_wakeup_init_user();
};

#endif
