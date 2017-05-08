#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void sort_by_ending(vector<int>& v, int n)
{
    n = pow(10, n);
    sort(v.begin(), v.end(), [n] (int i, int j) {return abs(i) % n < abs(j) % n;});
    return;
}

int main()
{
    vector<int> v {545, 0, -4435, -2243, 2455, 564, 84, -5454, 10243, 30043, 5608, 9};
    int n = 0;
    cin >> n;
    sort_by_ending(v, n);
    for (auto p = v.begin(); p != v.end(); p++)
        cout << *p << " ";
    return 0;
}
