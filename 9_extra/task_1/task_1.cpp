#include <iostream>
#include "isperfect.h"

using namespace std;

int main(int argc, char *argv[])
{
    //6, 28, 496, 8128, 33 550 336, ... (последовательность A000396 в OEIS)
    for (int n = 1; n < INT_MAX; n++)
    {
        //вызов из другого .cpp-файла
        if (isPerfect(n))
            cout << n << " is perfect number" << endl;
    }
    return 0;
}
