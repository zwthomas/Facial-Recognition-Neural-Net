cmake_minimum_required(VERSION 3.8)
project(Facial_Recognition)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp sigmoid.cpp sigmoid.h Network.cpp Network.h)
add_executable(Facial_Recognition ${SOURCE_FILES})