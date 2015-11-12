# Project details
project(library)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../filereader ${CMAKE_CURRENT_BINARY_DIR}/filereader)

# Project Headers/Source
set(${PROJECT_NAME}_headers "library.h")
set(${PROJECT_NAME}_sources "library.cpp")

# Create the library
add_library(${PROJECT_NAME} SHARED ${${PROJECT_NAME}_headers}
                                  ${${PROJECT_NAME}_sources})
target_link_libraries(${PROJECT_NAME} filereader)
