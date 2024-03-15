# animal
A simple demonstration of C++ Abstract Data Type with virtual methods and use of const.

Compiled with clang using:

```c++ -std=c++14 -o animal animal.cpp```

The sizeof() function is used to reveal that there is a hidden pointer in the class implementations.
This is the result of the need for Run Time Type Information to call the correct implementation of
the speak() member function / method.

# animal-template
This is a minor modification of the original animal program. It keeps the runtime polymorphism in
place and adds compile time polymorphism. Notice that the two can be mixed! This would allow a
C++ codebase to be incrementally updated to modern C++ overtime without a full rewrite.

