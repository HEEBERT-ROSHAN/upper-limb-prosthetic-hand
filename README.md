# Upper Limb Prosthetic Hand — Arduino Servo Controller

An Arduino-based end terminal device designed for partial hand amputees.  
Controls 5 servo motors for full grip and pinch gesture using push buttons.

## Hardware
- Arduino Uno/Nano
- 5x Servo Motors
- 2x Push Buttons (INPUT_PULLUP)

## Pin Mapping
| Finger  | Pin | Direction  |
|---------|-----|------------|
| Pinkey  |  9  | Normal     |
| Ring    | 10  | Normal     |
| Middle  | 11  | Reversed   |
| Index   |  6  | Reversed   |
| Thumb   |  5  | Reversed   |

## Button Functions
| Button | Pin | Action              |
|--------|-----|---------------------|
| Button 1 | D2 | Short press → Pinch, Long press (3s) → Full Grip |
| Button 2 | D3 | Release / Open hand |

## How It Works
- **Short press** Button 1 → Pinch grip (Index + Thumb)
- **Long press** Button 1 (3 sec) → Full grip (all 5 fingers)
- **Button 2** → Opens all fingers

## Author
Heebert Roshan  
Engineering Student (ECE)