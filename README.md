# animal
A simple demonstration of C++ Abstract Data Type with virtual methods and use of const.

Compiled with clang using:

```c++ -std=c++14 -o animal animal.cpp```

The sizeof() function is used to reveal that there is a hidden pointer in the class implementations.
This is the result of the need for Run Time Type Information to call the correct implementation of
the speak() member function / method.
