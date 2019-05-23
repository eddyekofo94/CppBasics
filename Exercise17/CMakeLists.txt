cmake_minimum_required(VERSION 3.1...3.14.2)
project(CppBasics VERSION 0.1.0)

set(SOURCE_FILES
	Main.cpp
    include/geometric_figure.hpp
	include/circle.hpp
	include/circle.cpp
	include/polygon.hpp
	include/polygon.cpp
	include/quadrilateral.hpp
	include/quadrilateral.cpp
	include/rectangle.hpp
	include/rectangle.cpp
	include/square.hpp
	include/square.cpp
	include/triangle.hpp
	include/triangle.cpp
    )

add_executable(Exercise17
	${SOURCE_FILES}
	)
target_include_directories(Exercise17 PRIVATE include)

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
