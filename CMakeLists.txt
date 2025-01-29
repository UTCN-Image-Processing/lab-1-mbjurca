cmake_minimum_required(VERSION 3.14)
project(Lab1)

set(CMAKE_CXX_STANDARD 20)

# --- Find OpenCV
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

# ------------------------------------------------------------------------------
# 1) Make a library that holds your image-processing logic
#
#    This library compiles src/lab1.cpp (and includes src/lab1.h).
#    It has no main() function. Any code that calls negative_image(), etc.
#    can link against this library.
# ------------------------------------------------------------------------------
add_library(lab1
        src/lab1.cpp
        src/lab1.h
)

target_link_libraries(lab1 PRIVATE ${OpenCV_LIBS})

# If test_lab1.cpp needs to #include "lab1.h", you might also do:
#target_include_directories(lab1 PUBLIC
#        "${CMAKE_CURRENT_SOURCE_DIR}/src"
#)

# ------------------------------------------------------------------------------
# 2) Main program that calls into lab1
#
#    This will produce an executable named 'Lab1' that has your main().
#    It links against the 'lab1' library for the image-processing code.
# ------------------------------------------------------------------------------
add_executable(Lab1
        main.cpp
)

target_link_libraries(Lab1 PRIVATE lab1)

set_target_properties(Lab1 PROPERTIES
        VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/Lab1"
)
