add_library(carrots_ecs INTERFACE
    )

target_sources(carrots_ecs
    PUBLIC
    FILE_SET HEADERS
    BASE_DIRS
    include
    FILES
    include/carrots_ecs.hpp
    include/schedule/schedule_label.hpp
    include/system/into_system.hpp
)
