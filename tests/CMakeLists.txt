cmake_minimum_required (VERSION 3.1)
project (tests CXX)

set (CMAKE_CXX_STANDARD 11)
#set(SOURCE_FILES )

find_package (Boost 1.48.0 COMPONENTS system unit_test_framework REQUIRED)
if (Boost_FOUND)
  include_directories ("../src" "${Boost_INCLUDE_DIRS}")

  add_executable (test_stopwatch test_stopwatch.cpp)
  target_link_libraries (test_stopwatch ${Boost_LIBRARIES})

  add_executable (test_mathext test_mathext.cpp)
  target_link_libraries (test_mathext ${Boost_LIBRARIES})
endif()
