cmake_minimum_required(VERSION 3.3 FATAL_ERROR)

project(Chapter-27-interpreter)

include_directories(${PROJECT_SOURCE_DIR}/internal)

set(Srcs
	main.cpp

        internal/context.cpp
		internal/abstractexpression.cpp
        internal/terminalexpression.cpp
		internal/nonterminalexpression.cpp
)

set(Hdrs
        internal/context.h
		internal/abstractexpression.h
        internal/terminalexpression.h
		internal/nonterminalexpression.h
)

add_executable(${PROJECT_NAME} ${Srcs} ${Hdrs})
