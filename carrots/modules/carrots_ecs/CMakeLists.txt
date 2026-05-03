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

# Tests

add_executable(ecs_tests
    tests/into_system.cpp
)

target_link_libraries(ecs_tests
    PRIVATE
        GTest::gtest_main
        carrots_ecs
)

gtest_discover_tests(ecs_tests)