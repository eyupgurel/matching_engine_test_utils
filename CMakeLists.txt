cmake_minimum_required(VERSION 3.21)
project(matching_engine_test_utils)

set(CMAKE_CXX_STANDARD 23)

include_directories("~/Documents/sc/c++/zeromq/matching.engine")



add_library(matching_engine_test_utils SHARED data_stream.cpp data_stream.h)

#target_link_libraries(matching_engine_test_utils PRIVATE debug ~/lib/matching.engine/debug/libmatching_engine.so)

#target_link_libraries(matching_engine_test_utils PRIVATE optimized ~/lib/matching.engine/release/libmatching_engine.so)