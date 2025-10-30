cmake_minimum_required(VERSION 3.10)
project(Mercado)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(Mercado
    src/Main.cpp
    src/Producto.cpp
    src/CarritoCompras.cpp
    src/ItemCarrito.cpp
    src/Usuario.cpp
)

target_include_directories(Mercado
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)