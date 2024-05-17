cmake_minimum_required(VERSION 3.10)  # Specify the minimum CMake version
project(BuilderDesignPattern)  # Replace with your project name

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add include directories
include_directories(include)
include_directories(include/StudentBuilder)

# file(GLOB SOURCES "src/Product/*.cpp src/*.cpp")
set(SOURCES
    main.cpp
    src/StudentBuilder/EngineeringStudentBuilder.cpp
    src/StudentBuilder/MbaStudentBuilder.cpp
    src/Director.cpp
    src/Student.cpp
)

# Add the executable
add_executable(BuilderDesignPattern
    ${SOURCES}
)