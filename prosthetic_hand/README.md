# Upper Limb Prosthetic Hand — Arduino Servo Controller

An Arduino-based end terminal device designed for partial hand amputees.  
Controls 5 servo motors for full grip and pinch gesture using push buttons.
## 3D Design Files
All printable STL files are available in the [`3d-files/`](3d-files/) folder.

| Part | File |
|------|------|
| Arm | Arm.stl |
| Arm Cover | Arm_Cover.stl |
| Index Finger | Finger_Index.stl |
| Middle Finger | Finger_Middle.stl |
| Pinky Finger | Finger_Pinky.stl |
| Ring Finger | Finger_Ring.stl |
| Thumb | Finger_Thumb.stl |
| Left Hand | Left_Hand.stl |
| Right Hand | Right_Hand.stl |

> 3D files can be viewed interactively on GitHub — click any `.stl` file to rotate and inspect the model in browser.

## Hackathon
- **Event:** ISTE Tamil Nadu Section Hackathon 2026
- **Venue:** Mahendra Engineering College  
- **Result:** 🏆 1st Prize

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
