cmake_minimum_required(VERSION 3.1...3.14.2)
project(CppBasics VERSION 0.1.0)

set(SOURCE_FILES
	Main.cpp
	include/Vector.cpp
	include/Vector.hpp
	include/int_stack.hpp
	include/int_stack.cpp
    )

add_executable(Main
	${SOURCE_FILES}
	)
target_include_directories(Main PRIVATE include)

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
