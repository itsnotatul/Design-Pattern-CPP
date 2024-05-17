➜  build cmake ..

-- Configuring done (0.1s)

-- Generating done (0.0s)

-- Build files have been written to: /Users/atultiwari/CODING/design_patterns/FactoryDesignPattern/build

➜  build make

[ 16%] Building CXX object CMakeFiles/FactoryDesignPattern.dir/main.cpp.o

[ 33%] Building CXX object CMakeFiles/FactoryDesignPattern.dir/src/Product/ConcreteProduct1.cpp.o

[ 50%] Building CXX object CMakeFiles/FactoryDesignPattern.dir/src/Product/ConcreteProduct2.cpp.o

[ 66%] Building CXX object CMakeFiles/FactoryDesignPattern.dir/src/Product/ConcreteProduct3.cpp.o

[ 83%] Building CXX object CMakeFiles/FactoryDesignPattern.dir/src/ProductFactory.cpp.o

[100%] Linking CXX executable FactoryDesignPattern

[100%] Built target FactoryDesignPattern

➜  build ./FactoryDesignPattern

ConcreteProduct1 object CREATED

ConcreteProduct1 object CREATED

ConcreteProduct3 object CREATED

ConcreteProduct1 object DESTROYED

ConcreteProduct1 object DESTROYED

ConcreteProduct3 object DESTROYED
