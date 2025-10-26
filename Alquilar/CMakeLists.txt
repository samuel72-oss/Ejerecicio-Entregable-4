cmake_minimum_required(VERSION 3.10)

project(Alquilar)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

set(SOURCES
    src/Vehiculo.cpp
    src/Carro.cpp
    src/Bicicleta.cpp
    src/main.cpp
)

add_executable(Alquilar ${SOURCES})