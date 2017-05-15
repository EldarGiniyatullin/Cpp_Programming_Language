#include <iostream>

#include "numeric_limits.h"

using namespace std;

int main()
{
    cout << numeric_limits<long>::max() << endl;
    cout << numeric_limits<unsigned short>::max() << endl;
    cout << numeric_limits<char>::max() << endl;
    cout << numeric_limits<unsigned char>::max() << endl;
    return 0;
}
