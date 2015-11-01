cmake_minimum_required(VERSION 3.0.0)

# Project Specifics
set(PROJECTNAME "TestApp")
project(${PROJECTNAME} CXX)
SET(PARENT_DIR ${PROJECT_DIR})

SET(VERSION_MAJOR "1")
SET(VERSION_MINOR "0")
SET(VERSION_PATCH "0")
SET(VERSION "${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}")

# Add project subdirectories
add_subdirectory(helloworld)
#add_subdirectory(filereader)
add_subdirectory(tyler)

# Create the executable
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} helloworld)
target_link_libraries(${PROJECT_NAME} tyler)
