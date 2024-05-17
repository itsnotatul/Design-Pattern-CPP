➜  build git:(main) ✗ cmake ..
-- Configuring done (0.1s)
-- Generating done (0.0s)
-- Build files have been written to: /Users/atultiwari/CODING/design_patterns/ChainOfResponsibilityDesignPattern/build
➜  build git:(main) ✗ make
[ 16%] Building CXX object CMakeFiles/ChainOfResponsibilityDesignPattern.dir/src/AbstractHandler.cpp.o
[ 33%] Linking CXX executable ChainOfResponsibilityDesignPattern
[100%] Built target ChainOfResponsibilityDesignPattern
➜  build git:(main) ✗ ./ChainOfResponsibilityDesignPattern
Abstract Handler object created
MonkeyHandler object Created
Abstract Handler object created
SquirellHandler object Created
Abstract Handler object created
DogHandler object Created
Chain: Monkey > Squirrel > Dog

Client: Who wants a nut?
sending request to next handler
 Squirrel: I'll eat the nut
Client: Who wants a bone?
sending request to next handler
sending request to next handler
 Dog: I'll eat the bone.

Client: Who wants a banana?
 Monkey: I'll eat the banana.

Client: Who wants a apple?
sending request to next handler
sending request to next handler
No handler left to handle the given request
  apple was left untouched.

Subchain: Squirrel > Dog

Client: Who wants a nut?
 Squirrel: I'll eat the nut
Client: Who wants a bone?
sending request to next handler
 Dog: I'll eat the bone.

Client: Who wants a banana?
sending request to next handler
No handler left to handle the given request
  banana was left untouched.
Client: Who wants a apple?
sending request to next handler
No handler left to handle the given request
  apple was left untouched.
MonkeyHandler object DESTROYED
Abstract Handler object destroyed
SquirellHandler object DESTROYED
Abstract Handler object destroyed
DogHandler object DESTROYED
Abstract Handler object destroyed