cmake_minimum_required(VERSION 3.31.3)

project(carrots LANGUAGES CXX)


# Tests

enable_testing()

include(FetchContent)

FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.12.1
)

FetchContent_MakeAvailable(googletest)

include(GoogleTest)

# Library

add_library(carrots INTERFACE)

add_subdirectory(modules/carrots_app)
add_subdirectory(modules/carrots_ecs)
add_subdirectory(modules/carrots_window)

target_link_libraries(carrots INTERFACE carrots_app carrots_ecs carrots_window)

target_sources(carrots
    PUBLIC
    FILE_SET HEADERS
    BASE_DIRS
    src
    FILES
    src/carrots.hpp
)
