cmake_minimum_required(VERSION 3.9)
project(education)

# set (CMAKE_RUNTIME_OUTPUT_DIRECTORY build)


# include_directories (
#    ${PROJECT_SOURCE_DIR}/include
# )

set (CMAKE_CXX_FLAGS "-Wno-register -Wno-overflow -std=c++17 -std=c++11")

function(make name)

   add_executable (${name} src/${name}.cpp)

   target_include_directories(${name} PRIVATE include)

   # set_target_properties (${name} PROPERTIES
         # CXX_COMPILER clang++
         # CXX_STANDARD 17
         # CXX_STANDARD_REQUIRED ON
         # COMPILE_FLAGS -Os
         # COMPILE_OPTIONS -Wno-pedantic -Wall -Wextra
      # )
endfunction(make)

make (lesson_2_1)
make (lesson_2_2)
make (lesson_2_3)



