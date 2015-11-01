# Project details
project(filereader)

# Project Headers/Source
set(${PROJECT_NAME}_headers "filereader.h")
set(${PROJECT_NAME}_sources "filereader.cpp")

# Create the library
add_library(${PROJECT_NAME} SHARED ${${PROJECT_NAME}_headers}
                                  ${${PROJECT_NAME}_sources})
