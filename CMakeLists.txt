cmake_minimum_required(VERSION 3.28)
project(rubix)

set(CMAKE_CXX_STANDARD 17)

add_executable(rubix main.cpp
        RubiksCube.cpp
        RubiksCube.h
        model/RubiksCube1dArray.cpp
        model/RubiksCube3dArray.cpp
        model/RubiksCube1dArray.cpp
        model/RubiksCube1dArray.cpp
        main.cpp)
