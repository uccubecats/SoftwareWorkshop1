# Project details
project(joeshmoe)

# Project Headers/Source
set(${PROJECT_NAME}_headers "${PARENT_DIR}/filereader/filereader.h" "joeshmoe.h")
set(${PROJECT_NAME}_sources "joeshmoe.cpp")

# Create the library
add_library(${PROJECT_NAME} SHARED ${${PROJECT_NAME}_headers}
                                   ${${PROJECT_NAME}_sources})
target_link_libraries(${PROJECT_NAME} filereader)
