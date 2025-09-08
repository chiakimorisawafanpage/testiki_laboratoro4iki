cmake_minimum_required(VERSION 3.31.6)
project(LoggerProject)

set(CMAKE_TOOLCHAIN_FILE "C:/Users/polik/vcpkg/scripts/buildsystems/vcpkg.cmake" CACHE STRING "")


add_subdirectory(src)
add_subdirectory(test)
