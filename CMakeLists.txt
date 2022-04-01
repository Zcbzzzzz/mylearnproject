cmake_minimum_required(VERSION 3.2)
project(mylearnproject)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 11)

set(mainPath "${PROJECT_SOURCE_DIR}")
set(EXECUTABLE_OUTPUT_PATH ${mainPath}/out)

set(cppPath "${mainPath}/src/")

file(GLOB mycpp "${cppPath}/*.cpp")

add_executable(test ${mycpp})