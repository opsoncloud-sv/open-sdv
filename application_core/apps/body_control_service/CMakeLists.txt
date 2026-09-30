add_executable(body_control_service src/main.cpp)

target_link_libraries(
    body_control_service PRIVATE vehicle_control::body_control_domain
)