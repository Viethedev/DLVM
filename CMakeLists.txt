cmake_minimum_required(VERSION 3.15)
project(DLVM LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

# Include core source
add_subdirectory(src/core)

# Tests
enable_testing()
add_subdirectory(tests)
