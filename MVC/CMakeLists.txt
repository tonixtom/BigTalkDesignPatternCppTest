cmake_minimum_required(VERSION 3.20)
project(mvc_test)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE Debug)

set(Srcs
        main.cpp
        internal/Controller.cpp
        internal/View.cpp
        internal/CreditsView.cpp
        internal/VersionView.cpp
        internal/TitleView.cpp)

set(Hdrs
        internal/Client.h
        internal/Controller.h
        internal/Model.h
        internal/Observer.h
        internal/Observable.h
        internal/View.h
        internal/TitleView.h
        internal/VersionView.h
        internal/CreditsView.h)

add_executable(${PROJECT_NAME} ${Srcs} ${Hdrs})
