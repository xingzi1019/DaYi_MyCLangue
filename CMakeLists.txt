cmake_minimum_required(VERSION 4.0)
project(clion C)

set(CMAKE_C_STANDARD 99)

add_executable(clion main.c seqTable.c
        seqTable.h)
