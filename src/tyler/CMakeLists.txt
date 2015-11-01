# Project details
project(tyler)

# Add the directory for the filereader so this library has access to its files.
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../filereader ${CMAKE_CURRENT_BINARY_DIR}/filereader)

# Project Headers/Source
set(${PROJECT_NAME}_headers "tyler.h")
set(${PROJECT_NAME}_sources "tyler.cpp")

# Create the library
add_library(${PROJECT_NAME} SHARED ${${PROJECT_NAME}_headers}
                                  ${${PROJECT_NAME}_sources})

# Link the filereader library with this one.
target_link_libraries(${PROJECT_NAME} filereader)
