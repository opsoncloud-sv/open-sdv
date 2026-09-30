#include "vehicle_control/body_control/vehicle_state.hpp"

namespace vehicle_control::body_control{
    std::string_view to_string(const DoorLockState lock_state){
        switch(lock_state){
            case DoorLockState::Unlocked:
                return "unlocked";
            case DoorLockState::Locked:
                return "locked";

        }

        return "unknown";
    }
}