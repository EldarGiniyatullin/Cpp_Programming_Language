#include <iostream>
#include "ispointer.h"

using namespace std;

#define ASSERT(a) cout << ((a) ? "True" : "False") << endl

int main(int argc, char *argv[])
{
    int* p = nullptr;
    int a = 5;
    int* pa = &a;
    ASSERT(isPointer(p));
    ASSERT(isPointer(a));
    ASSERT(isPointer(pa));
    return 0;
}
