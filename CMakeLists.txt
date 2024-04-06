cmake_minimum_required(VERSION 3.27)
project(efrei_L1_TI202B_tp08 C)

set(CMAKE_C_STANDARD 11)

add_executable(efrei_L1_TI202B_tp08 main.c
        etudiant.c
        etudiant.h
        date.c
        date.h
        classEtud.c
        classEtud.h
)
