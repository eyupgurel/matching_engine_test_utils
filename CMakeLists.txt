cmake_minimum_required(VERSION 3.21)

set(OSX_ARCHITECTURE arm64 #[[x86_64]])
set(CMAKE_OSX_ARCHITECTURES ${OSX_ARCHITECTURE})
set(CMAKE_HOST_SYSTEM_PROCESSOR  ${OSX_ARCHITECTURE})
set(CMAKE_SYSTEM_PROCESSOR  ${OSX_ARCHITECTURE})

message("CMAKE_OSX_ARCHITECTURES: ${CMAKE_OSX_ARCHITECTURES}")
message("CMAKE_HOST_SYSTEM_PROCESSOR: ${CMAKE_HOST_SYSTEM_PROCESSOR}")
message("CMAKE_SYSTEM_PROCESSOR: ${CMAKE_SYSTEM_PROCESSOR}")
message("CMAKE_CROSSCOMPILING: ${CMAKE_CROSSCOMPILING}")

project(matching_engine_test_utils)

set(CMAKE_CXX_STANDARD 23)

set(BOOST_ROOT "/usr/local/include/boost")
set(BOOSTROOT "/usr/local/include/boost")
find_package(Boost 1.78.0)
if(NOT Boost_FOUND)
    message(FATAL_ERROR "Could not find boost!")
endif()


include_directories("/usr/local/include" "~/Documents/sc/c++/matchingengine")



add_library(matching_engine_test_utils STATIC data_stream.cpp data_stream.h)
