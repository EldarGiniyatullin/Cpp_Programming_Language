#include <iostream>

#include "sum.h"

using namespace std;

int main(int argc, char *argv[])
{
    auto a = sum({1, 3, 5});
    cout << a << endl;
    cout << sum({5}) << endl;
    cout << sum({5.0, 3.0, 3.5}) << endl;
    cout << sum({5.0, 3.0, 3.01}) << endl;
    cout << sum({string("ab"), string("cd")}) << endl;
    return 0;
}
