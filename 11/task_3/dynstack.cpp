#include "dynstack.h"
#include <algorithm>
#include <iostream>

void DynStack::push(int val)
{
    if (size == maxsize)
    {
        auto newp = new int[maxsize*2];
        std::copy(p, p+size, newp);
        maxsize *= 2;
        delete [] p;
        p = newp;
    }
    p[size++] = val;
}

int DynStack::pop()
{
    return p[--size];
}

void DynStack::print()
{
    if (!size)
        std::cout << "Empty stack" << std::endl;
    else
    {
        std::cout << "Stack data:\n";
        if (!p)
        {
            throw std::string("Nullptr pointer on DynStack::p");
            return;
        }
        for (int i = 0; i < size; i++)
            std::cout << i << " => " << p[i] << "\n";
        std::cout << std::endl;
    }
}
