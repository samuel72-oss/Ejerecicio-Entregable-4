cmake_minimum_required(VERSION 3.10)
project(Parcial_Punto4)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(Parcial_Punto4
    src/Main.cpp
    src/DispositivoInteligente.cpp
)

target_include_directories(Parcial_Punto4
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)