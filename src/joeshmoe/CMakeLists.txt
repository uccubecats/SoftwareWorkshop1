# Project details
project(joeshmoe)

# Project Headers/Source
set(${PROJECT_NAME}_headers "joeshmoe.h")
set(${PROJECT_NAME}_sources "joeshmoe.cpp")

# Create the library
add_library(${PROJECT_NAME} SHARED ${${PROJECT_NAME}_headers}
                                   ${${PROJECT_NAME}_sources})
