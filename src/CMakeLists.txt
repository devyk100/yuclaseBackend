# Collect all source files in the src directory
set(SRC
    main.cpp
    server/http_server.cpp
    # Add other source files here if needed
)

# Create the executable from the collected source files
add_executable(yuclase_backend ${SRC})
