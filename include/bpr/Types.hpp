#pragma once


namespace BPR
{
    enum class VehicleType
    {
        Invalid = -1,
        Car = 0,
        Motorbike = 1,
        Plane = 2,
    };

    enum class BoostType
    {
        Speed = 0,
        Aggression = 1,
        Stunt = 2,
        None = 3,
        Locked = 4,
    };

    /*
        enum BrnWorld::CarControl
    */
    enum class PlayerVehicleDriver
    {
        None = 0,
        Player = 1,
        AI = 2,
    };

    /*
        enum BrnPhysics::Deformation::DeformationResetType
    */
    enum class DeformationType
    {
        None = -1,
        Event = 0,
        VehicleSelect = 1,
    };

    /*
        enum BrnGameState::GameStateModuleIO::ResetPlayerCarAction::CarSelectType
    */
    enum class VehicleSelectType
    {
        DontDrop = 0,
        DropNormal = 1,
        DropShutdown = 2,
    };
}
