➜  build git:(main) ✗ cmake ..

-- Configuring done (0.1s)

-- Generating done (0.0s)

-- Build files have been written to: /Users/atultiwari/CODING/design_patterns/StateDesignPattern/
build

➜  build git:(main) ✗ make

[ 20%] Building CXX object CMakeFiles/StateDesignPattern.dir/src/Context.cpp.o

[ 40%] Linking CXX executable StateDesignPattern

[100%] Built target StateDesignPattern

➜  build git:(main) ✗ ./StateDesignPattern

Context Object Created

ConcreteStateA Object Created

Setting state

I am currently at state A and I only handle request 1, so lucky day for you

Request Handled

I am currently at state A and I only handle request 1, so unlucky day for you, i am transferring 
state from stateA to state B

Request not Handled, transfered

ConcreteStateB Object Created

Setting state

ConcreteStateA Object DESTROYED

Context Object DESTROYED

ConcreteStateB Object DESTROYED