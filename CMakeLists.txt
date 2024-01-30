cmake_minimum_required(VERSION 3.27)
project(passm C)

set(CMAKE_C_STANDARD 23)

add_executable(passm main.c
        enc.c
        enc.h
        user_interaction.c
        user_interaction.h
        argprs/argprs.c
        argprs/argument.c
        argprs/argument.h
        argprs/arg_result_set.c
        argprs/arg_result_set.h
)
