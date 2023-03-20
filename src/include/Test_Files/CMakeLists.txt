cmake_minimum_required(VERSION 1.3.0) # version can be different

project(my_cpp_project) #name of your project

add_subdirectory(googletest-main) # add googletest subdirectory

include_directories(googletest-main/include) # this is so we can #include <gtest/gtest.h>

add_executable(Test_Files Test) # add this executable

target_link_libraries(Test_Files PRIVATE gtest) # link google test to this executable
