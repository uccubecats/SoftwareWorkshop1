# Project details
project(UtilLib)

# Project Headers/Source
set(${PROJECT_NAME}_headers "Util.h")
set(${PROJECT_NAME}_sources "Util.cpp")

# Create the library
add_library(${PROJECT_NAME} SHARED ${${PROJECT_NAME}_headers}
                                  ${${PROJECT_NAME}_sources})
