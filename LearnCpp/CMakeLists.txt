cmake_minimum_required(VERSION 3.27)
project(LearnCpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(LearnCpp main.cpp
        Lessons/mars.cpp
        Lessons/mars.h
        Lessons/payment_amount.cpp
        Lessons/prime_numbers.cpp
        Lessons/char_exercise.cpp
        Lessons/bubblesort.cpp
        Lessons/bubblesort.h
        Lessons/string_revers.cpp
        Lessons/quicksort.cpp
        Lessons/quicksort.h
        Lessons/byte_shift.cpp
        Lessons/byte_shift.h
)
