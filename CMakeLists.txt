cmake_minimum_required(VERSION 3.30)
project(Portal2D LANGUAGES C)

file(GLOB PORTAL2D_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/source/*.c
	${CMAKE_CURRENT_SOURCE_DIR}/source/*.h
)

add_executable(Portal2D ${PORTAL2D_SOURCES})
