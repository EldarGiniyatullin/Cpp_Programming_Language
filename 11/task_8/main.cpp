#include <iostream>
#include <string>

using namespace std;

#define TRACE(val) cout << "Value of " << #val << " is " << val << endl;

int main(int argc, char *argv[])
{
    int a = 5;
    TRACE(a)
    return 0;
}
