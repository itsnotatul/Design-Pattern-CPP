➜  Singleton git:(main) ✗ cd build

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

-- Configuring done (2.5s)

-- Generating done (0.0s)

-- Build files have been written to: /Users/atultiwari/CODING/design_patterns/Singleton/build

➜  build git:(main) ✗ make

[ 33%] Building CXX object CMakeFiles/SingletonDesignPattern.dir/main.cpp.o

[ 66%] Building CXX object CMakeFiles/SingletonDesignPattern.dir/src/Student.cpp.o

[100%] Linking CXX executable SingletonDesignPattern

[100%] Built target SingletonDesignPattern

➜  build git:(main) ✗ ./SingletonDesignPattern

Student object CREATED

10 40 shiva

address of _student1 0x309b18378

Student object already created. Don't be smart

20 50 atul

address of _student1 0x309b18348

Student object DESTROYED