cmake_minimum_required(VERSION 3.6)
project(infos)

set(CMAKE_PREFIX_PATH "/opt/Qt5.7.1/5.7/gcc_64")
find_package(Qt5Core REQUIRED)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES main.cpp base/message.cpp base/clothes.cpp base/people.cpp data.cpp)
add_executable(infos ${SOURCE_FILES})
target_link_libraries(infos Qt5::Core)
