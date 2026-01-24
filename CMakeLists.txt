cmake_minimum_required(VERSION 4.2)

project(vcppake
   VERSION 0.0.1
   LANGUAGES CXX
   DESCRIPTION "Template project description"
)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(cmake/UpdateSubmodules.cmake)

find_package(fmt CONFIG REQUIRED)

set(SOURCES
   src/vcppake.cpp
)

add_executable(vcppake src/main.cpp ${SOURCES})
target_link_libraries(vcppake PRIVATE fmt::fmt)
add_library(vcppake_lib STATIC ${SOURCES})
target_link_libraries(vcppake_lib PRIVATE fmt::fmt)

include(CTest)
add_subdirectory(ut)
