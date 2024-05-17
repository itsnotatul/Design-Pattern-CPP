cmake_minimum_required(VERSION 3.10)  # Specify the minimum CMake version
project(FactoryDesignPattern)  # Replace with your project name

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add include directories
include_directories(include)
include_directories(include/Product)

# file(GLOB SOURCES "src/Product/*.cpp src/*.cpp")
set(SOURCES
    main.cpp
    src/Product/ConcreteProduct1.cpp
    src/Product/ConcreteProduct2.cpp
    src/Product/ConcreteProduct3.cpp
    src/ProductFactory.cpp
)

# Add the executable
add_executable(FactoryDesignPattern
    ${SOURCES}
)

