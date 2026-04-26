cmake_minimum_required(VERSION 3.31.3)

project(TryCraft LANGUAGES CXX)

add_executable(TryCraft
    src/main.cpp
)

add_subdirectory(carrots)

target_link_libraries(TryCraft
    PUBLIC
        carrots
)