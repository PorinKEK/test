cmake_minimum_required(VERSION 3.0...3.30)

set(CMAKE_BUILD_TYPE Debug)

project(main)

set(SRCS
    src/main.cpp
)
include_directories("../../utils/csvparser/src/")

add_executable(main ${SRCS})

target_link_libraries(main PUBLIC csvparser)

install (TARGETS main DESTINATION build)