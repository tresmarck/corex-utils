cmake_minimum_required(VERSION 3.14)

if(NOT DEFINED CMAKE_C_COMPILER)
    # We're compiling this project on its own.
    set(CMAKE_C_COMPILER   "clang-11")
elseif(NOT CMAKE_C_COMPILER STREQUAL "Clang")
    # We're compiling this project as part of another project. But we're not
    # using Clang. So, let's raise an error.
    message(FATAL_ERROR "Clang is not being used.")
endif()

if(NOT DEFINED CMAKE_CXX_COMPILER)
    # We're compiling this project on its own.
    set(CMAKE_CXX_COMPILER "clang++-11")
elseif(NOT CMAKE_CXX_COMPILER STREQUAL "Clang")
    # We're compiling this project as part of another project. But we're not
    # using Clang. So, let's raise an error.
    message(FATAL_ERROR "Clang is not being used.")
endif()

project(corex-utils)

set(CMAKE_CXX_STANDARD          17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS        OFF)

# Mhmm. We're sticking with just Clang. Note that -stdlib is a Clang-only flag.
set(CMAKE_CXX_FLAGS "${CMAKE_C_FLAGS} -stdlib=libc++")

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src/)

add_subdirectory(src/)
