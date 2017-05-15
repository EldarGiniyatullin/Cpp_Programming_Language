#include <iostream>

using namespace std;

int main()
{
    double x;
    cin >> x;
    auto a = reinterpret_cast<int*>(&x);
    cout << a[0] << " " << a[1];
    return 0;
}
