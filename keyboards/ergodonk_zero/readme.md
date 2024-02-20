# ErgoDonk Zero

![ErgoDonk Zero](https://raw.githubusercontent.com/JellyTitan/ErgoDonk-Zero/main/images/v0.1_hero.JPG)

ErgoDonk Zero is a 6×9+6 keys split ortholinear keyboard with encoder & solenoid
 support, hotswap sockets for MX or Choc v1 low profile switches, and uses the 
 RP2040 Zero MCU.

* Keyboard Maintainer: [Ryan Neff](https://github.com/Ryan Neff)
* Hardware Supported: ErgoDonk Zero
* Hardware Availability: https://github.com/JellyTitan/ErgoDonk-Zero

Flashing example for this keyboard:

```bash
# For flashing the left half...
make ergodonk_zero:default:uf2-split-left
# or the qmk cli equivalent:
qmk flash -kb ergodonk_zero --keymap default -bl uf2-split-left

# For flashing the right half...
make ergodonk_zero:default:uf2-split-right
# or the qmk cli equivalent:
qmk flash -kb ergodonk_zero --keymap default -bl uf2-split-right
```

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the top left key (Escape) for left hand, or the top right key (Delete) for the right hand, and plug in the keyboard
* **Physical reset button**: Hold down the BOOT button on the Zero while plugging the keyboard.
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
