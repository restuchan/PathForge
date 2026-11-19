cmake_minimum_required(VERSION 3.16)

project(PathForge
    VERSION 1.0.0
    DESCRIPTION "C++ Maze Generation and Pathfinding Engine"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(PathForge
    src/main.cpp
)

target_include_directories(PathForge PRIVATE include)
