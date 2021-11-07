cmake_minimum_required(VERSION 3.17)
project(08)

set(CMAKE_CXX_STANDARD 14)
set(Srcs
        main.cpp


        internal/AddFactory.cpp internal/Operation.cpp internal/OperationAdd.cpp internal/OperationFactory.cpp internal/OperationSub.cpp internal/SubFactory.cpp)

set(Hdrs


        internal/Operation.h internal/OperationAdd.h internal/OperationFactory.h internal/AddFactory.h internal/OperationSub.h internal/SubFactory.h)

add_executable(${PROJECT_NAME} ${Srcs} ${Hdrs})
