#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

bool is_vector_ten(const vector<vector<int> >& v)
{
    return any_of(v.begin(), v.end(), [] (const vector<int>& p) {return all_of(p.begin(), p.end(), [] (const int& q) {return q % 10 == 0;} ) ;} );
}

int main()
{
    vector<vector<int> > v {vector<int> {2, 3, 5}, vector<int> {7, -10, 9}, vector<int> {10, 540, -60}};
    cout << (is_vector_ten(v) ? "True" : "False") << endl;
    v[2][2] /= 10;
    cout << (is_vector_ten(v) ? "True" : "False") << endl;
    v[1][0] *= 10;
    v[1][2] *= 10;
    cout << (is_vector_ten(v) ? "True" : "False") << endl;
    return 0;
}
