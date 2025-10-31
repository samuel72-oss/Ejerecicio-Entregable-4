cmake_minimum_required(VERSION 3.10)
project(Ejercicios_Entrega4)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(Ejercicios_Entrega4
    src/Main.cpp
    src/CarritoCompras.cpp
    src/Itemcarrito.cpp
    src/producto.cpp
    src/usuario.cpp
)

target_include_directories(Ejercicios_Entrega4
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)