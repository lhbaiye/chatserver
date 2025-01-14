cmake_minimum_required(VERSION 3.0)


project(JsonExample)


set(CMAKE_CXX_STANDARD 11)


include_directories(include)
include_directories(test)

add_executable(main main.cpp)