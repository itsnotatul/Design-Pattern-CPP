cmake_minimum_required(VERSION 3.10)  # Specify the minimum CMake version
project(ChainOfResponsibilityDesignPattern)  # Replace with your project name

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add include directories
include_directories(include)

# file(GLOB SOURCES "src/Product/*.cpp src/*.cpp")
set(SOURCES
    main.cpp
    src/AbstractHandler.cpp
    src/MonkeyHandler.cpp
    src/SquirellHandler.cpp
    src/DogHandler.cpp
)

# Add the executable
add_executable(ChainOfResponsibilityDesignPattern
    ${SOURCES}
)