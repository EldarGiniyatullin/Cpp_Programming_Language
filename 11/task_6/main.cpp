#include <iostream>
#include "sum.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
    auto a = sum(1, 3, 5);
    cout << a << endl;
    cout << sum(5) << endl;
    cout << sum(5.0, 3.0, 3.5) << endl;
    cout << sum(5, 3.0, 3.01) << endl;
    cout << sum(5.1, 3.0, 3) << endl;
    cout << sum(string("a"), 'b') << endl;
    cout << sum(string("ab"), string("cd")) << endl;

    return 0;
}
