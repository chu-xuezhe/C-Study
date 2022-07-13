cmake_minimum_required(VERSION 3.22)
project(game2 C)

set(CMAKE_C_STANDARD 11)

include_directories(game2)

add_executable(game2
        game2/game.c
        game2/game.h
        game2/test.c)
