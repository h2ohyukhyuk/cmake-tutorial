cmake_minimum_required(VERSION 3.10)

project(ProjectPractices VERSION 0.0.1)

find_package(Ceres REQUIRED)

add_executable(practices src/main.cpp)

target_compile_definitions(practices PRIVATE MY_MACRO)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

message(STATUS "CMAKE_MODULE_PATH")
message(STATUS ${CMAKE_MODULE_PATH})

include(check-compiler-flag)

message(STATUS "top level dir")
message(STATUS ${CMAKE_SOURCE_DIR})
message(STATUS ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(src)
add_subdirectory(test)

message(STATUS "CMAKE_INSTALL_PREFIX: ${CMAKE_INSTALL_PREFIX}")

install(FILES License.txt
    DESTINATION ${CMAKE_INSTALL_PREFIX}/install/)

install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include
    DESTINATION ${CMAKE_INSTALL_PREFIX}/install/)

install(TARGETS practices DESTINATION ${CMAKE_INSTALL_PREFIX}/bin/)