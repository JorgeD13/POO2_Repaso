cmake_minimum_required(VERSION 3.17)
project(Training)

set(CMAKE_CXX_STANDARD 20)

add_executable(Training src/main.cpp src/lib.h src/ejercicios.h src/ejercicios.cpp src/funciones.h src/funciones.cpp src/Hash/Hash.cpp src/Hash/Hash.h src/graph/graph.cpp src/graph/graph.h)