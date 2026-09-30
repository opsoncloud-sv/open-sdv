#pragma once 
#include <cstdint>
#include <string_view>

namespace vehicle_control::body_control{
    enum class DoorLockState{
        Unlocked,
        Locked
    };

    struct VehicleState{
        DoorLockState lock_state{DoorLockState::Unlocked} ;
        bool driver_door_open{false};
        std::uint16_t speed_kph{0U};
    };

    [[nodiscard]] std::string_view to_string(DoorLockState lock_state);