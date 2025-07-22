add_library(dlvm_core
    tensor.cpp
)

target_include_directories(dlvm_core PUBLIC ${CMAKE_SOURCE_DIR}/include)
