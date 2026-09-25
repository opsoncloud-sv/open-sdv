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


