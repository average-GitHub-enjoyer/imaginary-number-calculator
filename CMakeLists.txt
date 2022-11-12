cmake_minimum_required(VERSION 3.16.3)

project(imaginarynumber)

add_executable (imaginarynumber imaginarynumber.cpp main.cpp)

add_test(NAME imaginarynumber COMMAND imaginarynumber)
