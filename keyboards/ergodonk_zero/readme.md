# ErgoDonk Zero

![ErgoDonk Zero](https://raw.githubusercontent.com/JellyTitan/ErgoDonk-Zero/main/images/v0.1_hero.JPG)

ErgoDonk Zero is a 6×9+6 keys split ortholinear keyboard with encoder & solenoid
 support, hotswap sockets for MX or Choc v1 low profile switches, and uses the 
 RP2040 Zero MCU.

* Keyboard Maintainer: [Ryan Neff](https://github.com/JellyTitan)
* Hardware Supported: ErgoDonk Zero
* Hardware Availability: https://github.com/JellyTitan/ErgoDonk-Zero

Remember you have to flash both halves of the keyboard for it to work!

Make example for this keyboard (after setting up your build environment):

    `make ergodonk_zero:default`

Flashing example for this keyboard:

    `make ergodonk_zero:default:flash`

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the top left key (Escape) for left hand, or the top right key (Delete) for the right hand, and plug in the keyboard
* **Physical reset button**: Hold down the BOOT button on the Zero while plugging the keyboard.
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
