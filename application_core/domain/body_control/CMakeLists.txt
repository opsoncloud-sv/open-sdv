add_library(body_control_domain
    src/vehicle_state.cpp
)
add_library(vehicle_control::body_control_domain ALIAS body_control_domain)

target_include_directories(body_control_domain
PUBLIC
$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

target_compile_features(body_control_domain PUBLIC cxx_std_20)

if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(
        body_control_domain
        PRIVATE 
            -Wall
            -Wextra 
            -Wpedantic
            -Werror
    )
endif()

if(BUILD_TESTING)
    add_executable(
        vehicle_state_test test/vehicle_state_test.cpp
    )

    target_link_libraries(
        vehicle_state_test
        PRIVATE
            vehicle_control::body_control_domain
    )

    add_test(
        NAME vehicle_state_test
        COMMAND vehicle_state_test
    )
endif()
