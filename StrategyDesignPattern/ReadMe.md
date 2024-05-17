➜  StrategyDesignPattern git:(main) ✗ cd build

➜  build git:(main) ✗ cmake ..

-- The C compiler identification is AppleClang 14.0.3.14030022

-- The CXX compiler identification is AppleClang 14.0.3.14030022

-- Detecting C compiler ABI info

-- Detecting C compiler ABI info - done

-- Check for working C compiler: /Library/Developer/CommandLineTools/usr/bin/cc - skipped

-- Detecting C compile features

-- Detecting C compile features - done

-- Detecting CXX compiler ABI info

-- Detecting CXX compiler ABI info - done

-- Check for working CXX compiler: /Library/Developer/CommandLineTools/usr/bin/c++ - skipped

-- Detecting CXX compile features

-- Detecting CXX compile features - done

-- Configuring done (2.4s)

-- Generating done (0.0s)

-- Build files have been written to: /Users/atultiwari/CODING/design_patterns/
StrategyDesignPattern/build

➜  build git:(main) ✗ make

[ 20%] Building CXX object CMakeFiles/StrategyDesignPattern.dir/main.cpp.o

[ 40%] Building CXX object CMakeFiles/StrategyDesignPattern.dir/src/Strategy/ConcreteStrategy1.cpp.
o

[ 60%] Building CXX object CMakeFiles/StrategyDesignPattern.dir/src/Strategy/ConcreteStrategy2.cpp.
o

[ 80%] Building CXX object CMakeFiles/StrategyDesignPattern.dir/src/Context.cpp.o

[100%] Linking CXX executable StrategyDesignPattern

[100%] Built target StrategyDesignPattern

➜  build git:(main) ✗ ./StrategyDesignPattern

ConcreteStrategy1 object CREATED

Context Object CREATED

I am an algorithm of ConcreteStrategy1 hello

ConcreteStrategy1 object DESTROYED

ConcreteStrategy2 object CREATED

I am an algorithm of ConcreteStrategy2 yeah

ConcreteStrategy1 object DESTROYED

Context object DESTRPYED