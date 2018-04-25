cmake_minimum_required(VERSION 3.9)
project(cmake_clion)

set(CMAKE_CXX_STANDARD 11)

add_executable(1 1.c)
add_executable(2 2.c foo.h foo.c)
add_executable(3 loop.c)
add_executable(4 loop2.c)