set(SOURCES
    src/hal.c
    src/delays.c
)

add_library(hal ${SOURCES})

target_include_directories(hal PUBLIC include-public/ /opt/microchip/xc8/v2.31/pic/include/
	/opt/microchip/xc8/v2.31/pic/include/proc/ /opt/microchip/xc8/v2.31/pic/include/legacy
	/opt/microchip/xc8/v2.31/pic/include/c99/)
