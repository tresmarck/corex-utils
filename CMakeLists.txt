cmake_minimum_required(VERSION 3.14)

# Yep! We're sticking with Clang.
set(CMAKE_C_COMPILER   "clang-11")
set(CMAKE_CXX_COMPILER "clang++-11")

project(corex-utils)

set(CMAKE_CXX_STANDARD          17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS        OFF)

# Mhmm. We're sticking with just Clang. Note that -stdlib is a Clang-only flag.
set(CMAKE_CXX_FLAGS "${CMAKE_C_FLAGS} -stdlib=libc++")

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src/)

add_subdirectory(src/)
