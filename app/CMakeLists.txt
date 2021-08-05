set(SOURCES
    src/main.c
)

add_executable(app ${SOURCES})
target_include_directories(app PRIVATE include/)
target_link_libraries(app hal)
target_compile_definitions(app PUBLIC __XC __XC8 __PICC__)
