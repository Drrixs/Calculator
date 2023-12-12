cmake_minimum_required(VERSION 3.0)
project(untitled)

set(CMAKE_CXX_STANDARD 23)

add_executable(untitled main.cpp)

find_package(Qt5Widgets REQUIRED)
target_link_libraries(untitled Qt5::Widgets)
