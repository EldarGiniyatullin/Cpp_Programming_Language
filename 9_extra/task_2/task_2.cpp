#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include "withrepeat.h"

using namespace std;

int main()
{
    list<int> a {2, 3, 5, 9};
    vector<int> b {2, 3, 5, 7, 7, 6};
    list<int> c {2, 3, 5, 9, 9};
    deque<int> d {2, 3, 5, 7, 7, 6, 6};
    deque<double> e {};
    deque<double> f {1.0};
    deque<double> g {1.0, 2.0};
    cout << ((withRepeat(a) != a.end()) ? to_string(*withRepeat(a)) : "end()") << endl;
    cout << ((withRepeat(b) != b.end()) ? to_string(*withRepeat(b)) : "end()") << endl;
    cout << ((withRepeat(c) != c.end()) ? to_string(*withRepeat(c)) : "end()") << endl;
    cout << ((withRepeat(d) != d.end()) ? to_string(*withRepeat(d)) : "end()") << endl;
    cout << ((withRepeat(e) != e.end()) ? to_string(*withRepeat(e)) : "end()") << endl;
    cout << ((withRepeat(f) != f.end()) ? to_string(*withRepeat(f)) : "end()") << endl;
    cout << ((withRepeat(g) != g.end()) ? to_string(*withRepeat(g)) : "end()") << endl;

    return 0;
}
