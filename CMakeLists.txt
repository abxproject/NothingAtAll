cmake_minimum_required(VERSION 3.23)
project(NothingAtAll C)

set(CMAKE_C_STANDARD 17)

add_executable(NothingAtAll src/main.c src/game.c src/game.h)
