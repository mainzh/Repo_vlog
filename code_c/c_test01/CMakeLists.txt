cmake_minimum_required(VERSION 3.10.0)
project(project VERSION 0.1.0 LANGUAGES C)

file(GLOB_RECURSE SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/User/Src/*.c)
add_executable(project ${SOURCES})    #添加可执行文件(项目名 源文件)

# 添加头文件目录
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/User/Inc)
