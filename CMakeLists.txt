cmake_minimum_required(VERSION 3.19)
project(lab5_another C)

set(CMAKE_C_STANDARD 99)

add_executable(lab5_another main.c Graph/Graph.c Graph/Graph.h Menu/Menu.c Menu/Menu.h Queue/Queue.c Queue/Queue.h Messages/Messages.c Messages/Messages.h)

target_link_libraries(lab5_another m)
