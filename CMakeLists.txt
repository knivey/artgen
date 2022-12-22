cmake_minimum_required(VERSION 3.0)

project(artgen)

add_executable(artgen main.cpp)

install(TARGETS artgen RUNTIME DESTINATION bin)
