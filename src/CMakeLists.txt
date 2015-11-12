cmake_minimum_required(VERSION 3.0.0)

# Project Specifics.
set(PROJECTNAME "TestApp")
project(${PROJECTNAME} CXX)

# Setup the project version.
SET(VERSION_MAJOR "1")
SET(VERSION_MINOR "0")
SET(VERSION_PATCH "0")
SET(VERSION "${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}")

# Add library include directories (their sub-directory).
include_directories(filereader)
include_directories(helloworld)
include_directories(tyler)
include_directories(joeshmoe)

# Add project subdirectories.
add_subdirectory(helloworld)
add_subdirectory(filereader)
add_subdirectory(tyler)
add_subdirectory(joeshmoe)

# Create the executable.
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} helloworld)
target_link_libraries(${PROJECT_NAME} tyler)
target_link_libraries(${PROJECT_NAME} joeshmoe)
target_link_libraries(${PROJECT_NAME} filereader)

# Add custom build commands to execute.
add_custom_command(TARGET ${PROJECT_NAME} COMMAND java -jar ../utilities/DistPackage.jar)
