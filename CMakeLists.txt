cmake_minimum_required(VERSION 3.1...3.14.2)
project(CppBasics VERSION 0.1.0)

set(CMAKE_CXX_COMPILER /usr/bin/g++ CACHE PATH "" FORCE)

include(CTest)
enable_testing()

add_subdirectory(Exercise1)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
