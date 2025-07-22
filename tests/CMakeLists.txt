add_executable(dlvm_tests core_tests.cpp)
target_include_directories(dlvm_tests PRIVATE ${CMAKE_SOURCE_DIR}/src)  # for dlvm core
target_include_directories(dlvm_tests PRIVATE /mingw64/include)          # Catch2 from pacman
target_link_libraries(dlvm_tests PRIVATE dlvm_core)                      # link to your core lib

add_test(NAME DLVM_Tests COMMAND dlvm_tests)
