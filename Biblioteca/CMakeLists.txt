cmake_minimum_required(VERSION 3.10)
project(Biblioteca)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(biblioteca
    src/Main.cpp
    src/Biblioteca.cpp
    src/Libro.cpp
)

target_include_directories(biblioteca
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)