cmake_minimum_required(VERSION 3.5)

project(lab3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(lab3
    main.cpp
    iproduto.cpp
    iproduto.h
    iimposto.cpp
    iimposto.h
    icms.cpp
    icms.h
    ipi.cpp
    ipi.h
    produtoalimenticio.cpp
    produtoalimenticio.h
    produtoeletronico.cpp
    produtoeletronico.h)
