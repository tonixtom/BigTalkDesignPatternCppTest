cmake_minimum_required(VERSION 3.3 FATAL_ERROR)

project(Chapter-28-Visitor)

include_directories(${PROJECT_SOURCE_DIR}/internal)

set(Srcs
	main.cpp

		internal/objectStructure.cpp
		internal/element.cpp
		internal/visitor.cpp
)

set(Hdrs
		internal/objectStructure.h
		internal/element.h
		internal/visitor.h
)

add_executable(${PROJECT_NAME} ${Srcs} ${Hdrs})
