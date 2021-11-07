cmake_minimum_required(VERSION 3.3 FATAL_ERROR)

project(graph_Bridge)
set(CMAKE_CXX_STANDARD 17)
include_directories(${PROJECT_SOURCE_DIR}/internal)
include_directories(${PROJECT_SOURCE_DIR}/internal/Interface)

set(Srcs
		main.cpp
		internal/Interface/Shape.cpp
		internal/Red.cpp
		internal/Circle.cpp
		)

set(Hdrs
		internal/Interface/DrawAPI.h
		internal/Interface/Shape.h
		internal/Red.h
		internal/Circle.h
		)

add_executable(${PROJECT_NAME} ${Srcs} ${Hdrs})
