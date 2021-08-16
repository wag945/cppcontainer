cmake_minimum_required (VERSION 2.6)

project (CppContainer)

set(CMAKE_CXX_FLAGS "-g -Wall")

set(CMAKE_CXX_STANDARD 11)

add_executable(CppContainer main.cpp MyClass.cpp)
