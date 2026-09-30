#include "vehicle_control/body_control/vehicle_state.hpp"

#include <iostream>

int main()
{
    const vehicle_control::body_control::VehicleState state{};

    std::cout << "Door lock state: "
              << vehicle_control::body_control::to_string(state.lock_state)
              << '\n';

    return 0;
}
