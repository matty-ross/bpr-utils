# Burnout Paradise Remastered Utils

![](https://img.shields.io/badge/Windows-0078D6?style=for-the-badge&logo=windows&logoColor=white)
![](https://img.shields.io/badge/Visual%20Studio-5C2D91?style=for-the-badge&logo=visual-studio&logoColor=white)
![](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)

A library with various utilities for Burnout Paradise Remastered integrations.


## Usage

### `Types`

```cpp
#include "bpr/Types.hpp"


// Vehicle type.
BPR::VehicleType vehicleType = BPR::VehicleType::Car;


// Boost type.
BPR::BoostType boostType = BPR::BoostType::Stunt;


// Player vehicle driver.
BPR::PlayerVehicleDriver playerVehicleDriver = BPR::PlayerVehicleDriver::Player;


// Deformation type.
BPR::DeformationType deformationType = BPR::DeformationType::VehicleSelect;


// Vehicle select type.
BPR::VehicleSelectType vehicleSelectType = BPR::VehicleSelectType::DropNormal;
```

### `CgsID`

```cpp
#include "bpr/CgsID.hpp"


// Compress a CgsID.
uint64_t id = BPR::CgsID_Compress("PUSMC01");
// id: 0xA7E60F1A3A360000


// Uncompress a CgsID.
char string[13] = {};
BPR::CgsID_Uncompress(0xA7E60F1A3A360000, string);
// string: "PUSMC01"
```

### `Language`

```cpp
#include "bpr/Language.hpp"


// Format text.
char buffer[1024] = {};
BPR::LanguageManager_FormatText(
    buffer,
    sizeof(buffer),
    "12345.6789",
    BPR::LanguageManager_TextFormatType::MinutesSecondsMidText
);
// buffer: "205 Min 46 Secs"


// Find a string based on its ID.
const char* string = BPR::LanguageManager_FindString("CAR_PUSMC01");
// string: "Cavalry"
```


### `GameEvents`

```cpp
#include "bpr/GameEvents.hpp"


// Add a game event to the game event queue.
BPR::GameEvent_ChangePlayerVehicle gameEvent =
{
    .VehicleID = 0xA7E60F1A3A360000,
    .WheelID = 0,
    .ResetPlayerCamera = true,
    .KeepResetSection = true,
};
BPR::GameEventQueue_AddGameEvent(gameEventQueue, &gameEvent, gameEvent.ID, sizeof(gameEvent));

// NOTE: The game events must be added to the queue when it's locked for writing.
```

### `GameActions`

```cpp
#include "bpr/GameActions.hpp"


// Add a game action to the game action queue.
BPR::GameAction_ResetPlayerVehicleOnTrack gameAction =
{
    .Speed = 0.0f,
};
BPR::GameActionQueue_AddGameAction(gameActionQueue, &gameAction, gameAction.ID, sizeof(gameAction));

// NOTE: The game actions must be added to the queue when it's locked for writing.
```
