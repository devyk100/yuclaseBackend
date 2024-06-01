# Define the source files for the utils module
set(UTILS_SOURCES
    logger.cpp
    config.cpp
)

# Create a static library for the utils module
add_library(utils STATIC ${UTILS_SOURCES})

# Specify include directories for the utils module
target_include_directories(utils PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../../include)
