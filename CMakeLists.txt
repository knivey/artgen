cmake_minimum_required(VERSION 3.0)

project(artgen)

add_executable(artgen main.cpp canvas.cpp pixel.cpp irc2ansi.cpp)

install(TARGETS artgen RUNTIME DESTINATION bin)

target_compile_features(artgen PUBLIC cxx_std_20)
