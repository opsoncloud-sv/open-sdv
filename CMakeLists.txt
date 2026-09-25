cmake_minimum_required(VERSION 3.20)

project(
    vehicle_control_patform
    VERSION 0.1.0
    DESCRIPTION "Open-Source vehicle body control platform"
    LANGIAGES C CXX
)

# All Linux-side application services will use modern C++.

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Helps VS Code, clang-tidy and other developer tools understand the build.
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Keeps generated executables in one easy-to-find place.
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Enables future automated tests.
include(CTest)

# Build the application-side services.
add_subdirectory(application_core)

# The real-time controller will be introduced after Zephyr setup.
option(BUILD_REAL_TIME_CONTROLLER "Build the real-time controller firmware" OFF)

if(BUILD_REAL_TIME_CONTROLLER)
    add_subdirectory(real_time_controller)
endif()




