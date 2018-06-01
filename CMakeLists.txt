cmake_minimum_required(VERSION 3.8)
project(csv_reader)

set(CMAKE_CXX_STANDARD 11)

SET(GCC_ERROR_RETURN_TYPE "-Werror=return-type")
add_definitions(${GCC_ERROR_RETURN_TYPE})

set(SOURCE_FILES test/main.cpp CSVReader.hpp)
add_executable(csv_reader ${SOURCE_FILES})
