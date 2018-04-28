cmake_minimum_required(VERSION 3.9)
project(cmake_clion)

set(CMAKE_CXX_STANDARD 11)

add_executable(1 1.c)
add_executable(2 2.c foo.h foo.c)
add_executable(hahaha loop.c)
add_executable(heihei loop2.c)

add_library(libfoo foo.c)
add_executable(delta 2.c)
target_link_libraries(delta libfoo)

add_executable(ptr ptr.c)
add_executable(ptr2 ptr2.c)