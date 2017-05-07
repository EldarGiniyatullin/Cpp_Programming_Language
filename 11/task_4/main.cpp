#include <iostream>

#include "numeric_limits.h"

#define NUMLIM(type) numeric_limits<type>::max()

using namespace std;

int main()
{
    cout << NUMLIM(long) << endl;
    cout << NUMLIM(unsigned short) << endl;
    cout << NUMLIM(int) << endl;
    cout << NUMLIM(unsigned int) << endl;
    return 0;
}
