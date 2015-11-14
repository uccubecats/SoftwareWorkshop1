cmake_minimum_required(VERSION 3.0.0)

# Project specifics.
set(PROJECTNAME "TestApp")
project(${PROJECTNAME} CXX)

# Setup the project version.
SET(VERSION_MAJOR "1")
SET(VERSION_MINOR "0")
SET(VERSION_PATCH "0")
SET(VERSION "${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}")

# Global reference to the parent directory.
SET(PARENT_DIR "${CMAKE_CURRENT_SOURCE_DIR}" CACHE INTERNAL "Parent Directory")

# Find all required external/third-party libraries.
#find_package(OpenCV REQUIRED)

# Add project subdirectories (for intenral libraries).
add_subdirectory(helloworld)
add_subdirectory(filereader)
add_subdirectory(tyler)
add_subdirectory(joeshmoe)

# Create the executable.
add_executable(${PROJECT_NAME} main.cpp)

# Link internal libraries.
target_link_libraries(${PROJECT_NAME} helloworld)
target_link_libraries(${PROJECT_NAME} tyler)
target_link_libraries(${PROJECT_NAME} joeshmoe)

# Link external libraries.
#target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})

# Add custom build commands to execute.
add_custom_command(TARGET ${PROJECT_NAME} COMMAND java -jar ../utilities/DistPackage.jar)
