cmake_minimum_required(VERSION 3.21)
project(matching_engine_test_utils)

set(CMAKE_CXX_STANDARD 23)

set(BOOST_ROOT "/usr/local/include/boost")
set(BOOSTROOT "/usr/local/include/boost")
find_package(Boost 1.78.0)
if(NOT Boost_FOUND)
    message(FATAL_ERROR "Could not find boost!")
endif()


include_directories("/usr/local/include" "~/Documents/sc/c++/matchingengine")



add_library(matching_engine_test_utils SHARED data_stream.cpp data_stream.h)

#target_link_libraries(matching_engine_test_utils PRIVATE debug ~/lib/matching_engine/debug/libmatching_engine.so)

#target_link_libraries(matching_engine_test_utils PRIVATE optimized ~/lib/matching_engine/release/libmatching_engine.so)