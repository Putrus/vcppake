cmake_minimum_required(VERSION 4.2)

project(vcppake
   VERSION 0.0.1
   LANGUAGES CXX
   DESCRIPTION "Piece of cake. Modern C++ project template with CMake build system and vcpkg package manager."
)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(cmake/UpdateSubmodules.cmake)

set(SOURCES
   src/main.cpp
)

add_executable(vcppake ${SOURCES})
target_link_libraries(vccpake PRIVATE module)

include(CTest)
add_subdirectory(module)
add_subdirectory(module_ut)
