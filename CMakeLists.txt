cmake_minimum_required(VERSION 3.23)
project(NothingAtAll C)

set(CMAKE_C_STANDARD 11)

add_executable(NothingAtAll src/main.c src/chapter1.c src/chapter1.h src/chapter1b.c src/chapter1b.h src/func/terminal.c src/func/terminal.h src/func/endings.c src/func/endings.h)
