cmake_minimum_required(VERSION 3.28)
project(Portal2D LANGUAGES C)

add_executable(portal2d
	${CMAKE_CURRENT_SOURCE_DIR}/source/editor.c
	${CMAKE_CURRENT_SOURCE_DIR}/source/engine.c
	${CMAKE_CURRENT_SOURCE_DIR}/source/fix.c
	${CMAKE_CURRENT_SOURCE_DIR}/source/level.c
	${CMAKE_CURRENT_SOURCE_DIR}/source/math.c
	${CMAKE_CURRENT_SOURCE_DIR}/source/matrix.c
	${CMAKE_CURRENT_SOURCE_DIR}/source/object.c
	${CMAKE_CURRENT_SOURCE_DIR}/source/picture.c
	${CMAKE_CURRENT_SOURCE_DIR}/source/polygon.c
	${CMAKE_CURRENT_SOURCE_DIR}/source/sector.c
	${CMAKE_CURRENT_SOURCE_DIR}/source/sintable.c
	${CMAKE_CURRENT_SOURCE_DIR}/source/wall.c
)
