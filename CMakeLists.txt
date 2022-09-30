cmake_minimum_required(VERSION 3.15.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project(fmt
  LANGUAGES CXX)

add_executable(hello_world hello_world.cpp)

add_subdirectory(fmt)
target_link_libraries(hello_world PRIVATE fmt::fmt-header-only)

