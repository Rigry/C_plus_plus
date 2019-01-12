cmake_minimum_required(VERSION 3.9)
project(education)

add_executable (lesson_1 src/lesson_1.cpp)

target_include_directories(lesson_1 PRIVATE include)