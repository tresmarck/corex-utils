cmake_minimum_required(VERSION 3.14)

add_library(corex-utils STATIC
    allocator.cpp
    fcomp.cpp
    # So that CLion and IDEs that have CMake integration will know that the
    # header-only files are part of the project.
    random.hpp
    ReturnState.hpp
    ReturnValue.hpp
    ../utils.hpp
)