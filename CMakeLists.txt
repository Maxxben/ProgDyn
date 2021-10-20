cmake_minimum_required(VERSION 3.20)
project(ProgDyn)

set(CMAKE_CXX_STANDARD 14)

add_executable(ProgDyn dichoto.c dichoto.h main.c)
