cmake_minimum_required(VERSION 3.21)
project(LibraryManagementSystem)

set(CMAKE_CXX_STANDARD 14)

add_executable(LibraryManagementSystem main.cpp src/students.cpp src/students.h src/auth.cpp src/auth.h src/books.cpp src/books.h)
