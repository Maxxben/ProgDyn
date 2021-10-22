cmake_minimum_required(VERSION 3.20)
project(ProgDyn)

set(CMAKE_CXX_STANDARD 14)

add_executable(ProgDyn dichoto/dichoto.c dichoto/dichoto.h main.c glouton/glouton.c glouton/glouton.h test.c pgcb/pgcb.h pgcb/pgcb.c)

add_custom_target(documentation COMMAND doxygen)