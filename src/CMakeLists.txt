# Add subdirectories for each component
add_subdirectory(server)
add_subdirectory(utils)

# Define the executable target with main.cpp
add_executable(yuclase_backend main.cpp)

# Specify include directories
target_include_directories(yuclase_backend PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)

# Link libraries (if any)
target_link_libraries(yuclase_backend server utils)
