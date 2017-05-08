#include <iostream>

#include "dynstack.h"

int main()
{
    DynStack *a = new DynStack();
    a->push(1);
    a->push(2);
    a->push(3);
    DynStack b = std::move(*a);
    b.print();
    try
    {
        a->print();
    }
    catch (std::string a)
    {
        std::cout << a << std::endl;
    }
    delete a;
    return 0;
}
