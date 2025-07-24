cmake_minimum_required(VERSION 3.10)

# variables
set(PROJECT_NAME extracter)
set(SRC_PATH ${CMAKE_CURRENT_SOURCE_DIR}/src)

# project
project(${PROJECT_NAME} VERSION 1.0)

# builds

file(GLOB SOURCES "${SRC_PATH}/*.cpp")
add_executable(${PROJECT_NAME} ${SOURCES})

set_target_properties(${PROJECT_NAME} 
	PROPERTIES
	CXX_STANDARD 23
	CXX_STANDARD_REQUIRED ON
)

# libs

find_package(libzippp CONFIG REQUIRED)

target_link_libraries(${PROJECT_NAME} PUBLIC libzippp::libzippp)


# compiler settings

if (MSVC)

	set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MD")
	set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MDd")

	add_compile_options("/std:c++latest")
	
	target_compile_options(${PROJECT_NAME} PRIVATE
		/W4
	)
else ()
	target_compile_options(${PROJECT_NAME} PRIVATE
		-std=c++23 -Wall -Wextra -pedantic -Werror
	)
endif (MSVC)
