cmake_minimum_required(VERSION 3.7)
project(CLionTest)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp LearnConstructors.cpp LearnConstructors.h LearnInheritance.cpp LearnInheritance.h LearnContainers.cpp LearnContainers.h LearnPointers.cpp LearnPointers.h LearnFunctions.cpp LearnFunctions.h tools.cpp tools.h LearnErrors.cpp LearnErrors.h)
add_executable(CLionTest ${SOURCE_FILES})