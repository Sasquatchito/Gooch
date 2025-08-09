
cmake_minimum_required(VERSION 3.10) # Specify minimum CMake version
project(Gooch VERSION 1.0 LANGUAGES CXX) # Define project name, version, and supported languages
set(GOOCH_ROOT ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory("source")

