cmake_minimum_required(VERSION 3.10)

project(chessGame)

find_package(GLEW REQUIRED)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(
	chessGame
	src/main.cpp
)


add_subdirectory(deps/glfw)

target_link_libraries(
	chessGame
	glfw
	GLEW::GLEW
	${GLEW_LIBARIES}
	-lGL
	-lGLEW
)
