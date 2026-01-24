cmake_minimum_required(VERSION 4.2)

project(module
   DESCRIPTION "Module of vccpake project"
)

find_package(fmt CONFIG REQUIRED)

set(SOURCES
   src/Prettier.cpp
)

add_library(module STATIC ${SOURCES})
target_link_libraries(module PRIVATE fmt::fmt)

