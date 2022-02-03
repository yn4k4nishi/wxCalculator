cmake_minimum_required(VERSION 3.16)
project(wxCalc)

find_package(wxWidgets REQUIRED COMPONENTS net core base)

include(${wxWidgets_USE_FILE})

include_directories(
	${wxWidgets_INCLUDE_DIRS}	
)

add_executable(${PROJECT_NAME}
	src/main.cpp
	src/calculator.cpp
	src/calculator.h
)

target_link_libraries(${PROJECT_NAME}
	${wxWidgets_LIBRARIES}
)

