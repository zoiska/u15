cmake_minimum_required(VERSION 3.27)
project(u15)

set(CMAKE_CXX_STANDARD 17)

add_executable(u15 main.cpp
        Auto/auto_a.cpp
        Auto/auto_a.h
        Auto/Lenkrad.cpp
        Auto/Lenkrad.h
        Auto/auto_b.cpp
        Auto/auto_b.h
        Rennstall/Rennstall.cpp
        Rennstall/Rennstall.h
        Rennstall/Teammitglied.cpp
        Rennstall/Teammitglied.h
        Rennstall/Rennwagen.cpp
        Rennstall/Rennwagen.h
        Rennstall/Saison.cpp
        Rennstall/Saison.h)
