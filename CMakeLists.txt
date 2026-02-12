cmake_minimum_required(VERSION 3.14)

project(physicsSim LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ---- Compiler warnings & optimizations (modern way) ----
add_compile_options(-O3 -Wall)

# ---- GLFW options (avoid Wayland issues) ----
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

# ---- Add GLFW from libs/ ----
add_subdirectory(libs/glfw)

# ---- Your executable ----
add_executable(physicsSim
    main.cpp
    Src/foo.cpp
)

# ---- Include directories (target-based, modern CMake) ----
target_include_directories(physicsSim
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/Inc
        ${CMAKE_CURRENT_SOURCE_DIR}/Src
)

# ---- Link libraries ----
target_link_libraries(physicsSim
    PRIVATE
        glfw
        m
)
