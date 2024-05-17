cmake_minimum_required(VERSION 3.10)  # Specify the minimum CMake version
project(StrategyDesignPattern)  # Replace with your project name

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add include directories
include_directories(include)
include_directories(include/Strategy)

# file(GLOB SOURCES "src/Product/*.cpp src/*.cpp")
set(SOURCES
    main.cpp
    src/Strategy/ConcreteStrategy1.cpp
    src/Strategy/ConcreteStrategy2.cpp
    src/Context.cpp
)

# Add the executable
add_executable(StrategyDesignPattern
    ${SOURCES}
)
