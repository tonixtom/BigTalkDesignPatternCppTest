cmake_minimum_required(VERSION 3.17)
project(c___list)

set(CMAKE_CXX_STANDARD 14)


set(CMAKE_BUILD_TYPE Debug)


set(Srcs
        main.cpp

        Resume.cpp)

set(Hdrs

        Object.h Resume.h WorkExperience.h)

add_executable(${PROJECT_NAME} ${Srcs} ${Hdrs})
