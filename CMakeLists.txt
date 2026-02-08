cmake_minimum_required(VERSION 3.14)
project(physicsSim CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3 -Wall")

include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/Include
        ${CMAKE_CURRENT_SOURCE_DIR}/Source
)

add_executable(cmakeTest
        main.cpp
        Source/
        Include/
)

# 'm' is required for math functions like sqrt/sqrtf
target_link_libraries(physicsSim PRIVATE m)
