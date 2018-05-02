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

add_executable(3 loop.c)
add_executable(4 loop2.c)
add_executable(count count.c)
add_executable(replace replace.c)
add_executable(nospace nospace.c)
add_executable(state state.c)
