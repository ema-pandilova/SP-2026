cmake_minimum_required(VERSION 3.29)
project(SP2026)

set(CMAKE_CXX_STANDARD 20)

add_executable(SP2026 main.cpp)
add_executable(test aud1/test.cpp)

add_executable(aud2zad1 aud2/zad1.cpp)
add_executable(aud2zad3 aud2/zad3.cpp)
add_executable(aud2zad4 aud2/zad4.cpp)
add_executable(aud2zad5 aud2/zad5.cpp)
add_executable(aud2zad6 aud2/zad6.cpp)

add_executable(aud3zad1 aud3/zad1.cpp)
add_executable(aud3zad3 aud3/zad3.cpp)
add_executable(aud3zad4 aud3/zad4.cpp)
add_executable(aud3zad2 aud3/zad2.cpp)