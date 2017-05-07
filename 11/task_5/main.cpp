#include <iostream>
#include <memory>

#define N 10

using namespace std;

int main()
{
    unique_ptr<int> a[N];
    for (int i = 0; i < N; i++)
        a[i] = unique_ptr<int>(new int(i));
    for (int i = 0; i < N; i++)
    {
        cout << *(a[i]) << " ";
    }
    cout << endl;
    auto p = new int(*a[N-1]);
    for (int i = N-1; i >=0; i--)
    {
        a[i] = move(a[i-1]);
    }
    a[0] = move(unique_ptr<int>(p));
    for (int i = 0; i < N; i++)
    {
        cout << *(a[i]) << " ";
    }
    delete [] a;
    return 0;
}
