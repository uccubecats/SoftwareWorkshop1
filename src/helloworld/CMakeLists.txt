# Project details
project(helloworld)

# Project Headers/Source
set(${PROJECT_NAME}_headers "helloworld.h")
set(${PROJECT_NAME}_sources "helloworld.cpp")

# Create the library
add_library(${PROJECT_NAME} SHARED ${${PROJECT_NAME}_headers}
                                   ${${PROJECT_NAME}_sources})
