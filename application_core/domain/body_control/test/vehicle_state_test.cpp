#include "vehicle_control/body_control/vehicle_state.hpp"

#include <cassert>

int main()
{
    using namespace vehicle_control::body_control;

    const VehicleState state{};

    assert(state.lock_state == DoorLockState::Unlocked);
    assert(!state.driver_door_open);
    assert(state.speed_kph == 0U);

    assert(to_string(DoorLockState::Unlocked) == "unlocked");
    assert(to_string(DoorLockState::Locked) == "locked");

    return 0;
}
