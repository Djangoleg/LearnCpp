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
        Сlasses/Queue.cpp
        Сlasses/ClassWithPointer.cpp
        Сlasses/ClassWithPointer.h
        Сlasses/OperatorOverload.cpp
        Сlasses/OperatorOverload.h
        Сlasses/CharSet.cpp
        Сlasses/CharSet.h
        Сlasses/Inheritance/Vehicle.cpp
        Сlasses/Inheritance/Vehicle.h
        Сlasses/Inheritance/Shapes/Base/TwoDShape.cpp
        Сlasses/Inheritance/Shapes/Base/TwoDShape.h
        Сlasses/Inheritance/Shapes/Triangle.cpp
        Сlasses/Inheritance/Shapes/Triangle.h
        Сlasses/Inheritance/Shapes/Rectangle.cpp
        Сlasses/Inheritance/Shapes/Rectangle.h
        Сlasses/Inheritance/Shapes/Circle.cpp
        Сlasses/Inheritance/Shapes/Circle.h
)
