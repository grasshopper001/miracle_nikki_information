cmake_minimum_required(VERSION 3.6)
project(infos)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES main.cpp base/message.cpp base/clothes.cpp base/people.cpp data.cpp)
add_executable(infos ${SOURCE_FILES})