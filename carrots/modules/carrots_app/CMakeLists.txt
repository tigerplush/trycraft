add_library(carrots_app STATIC
    src/app/app.cpp
    )

target_sources(carrots_app
    PUBLIC
    FILE_SET HEADERS
    BASE_DIRS
    include
    FILES
    include/carrots_app.hpp
    include/app/app_traits.hpp
    include/app/app.hpp
    include/plugin/plugin_traits.hpp
)
