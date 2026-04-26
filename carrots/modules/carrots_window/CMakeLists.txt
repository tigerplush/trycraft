add_library(carrots_window STATIC
    src/carrots_window.cpp
    src/window/window_win32/window.cpp
)

target_sources(carrots_window
    PUBLIC
    FILE_SET HEADERS
    BASE_DIRS
    include
    FILES
    include/carrots_window.hpp
    include/window/window_win32/window.hpp
)

target_link_libraries(carrots_window
    PUBLIC
    carrots_app
)
