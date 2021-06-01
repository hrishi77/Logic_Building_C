#include <iostream>

extern "C" void f();
void f()
{
       std::cout << "Hello world from c++" <<std::endl;
}
