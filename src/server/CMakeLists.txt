# Define the source files for the server module
set(SERVER_SOURCES
    http_server.cpp
    http_request.cpp
    http_response.cpp
)

# Create a static library for the server module
add_library(server STATIC ${SERVER_SOURCES})

# Specify include directories for the server module
target_include_directories(server PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../../include)
