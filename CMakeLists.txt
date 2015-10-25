cmake_minimum_required(VERSION 3.0.0)

# Project Specifics
project(TestLib)
SET(VERSION_MAJOR "1")
SET(VERSION_MINOR "0")
SET(VERSION_PATCH "0")
SET(VERSION "${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}")

# Setup the environment
#add_definitions(-DDEF_RET_1)
#include_directories(${PROJECT_SOURCE_DIR}/include)
#link_directories(${PROJECT_SOURCE_DIR}/lib/static)

# Add project subdirectories
add_subdirectory(util)

# Create the executable
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} UtilLib)
#target_link_libraries(${PROJECT_NAME} opencv)
