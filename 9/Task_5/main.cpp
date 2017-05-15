#include <iostream>
#include <list>
#include <vector>


using namespace std;

template <class T>
typename T::value_type mean(T begin, T end)
{
    typename T::value_type sum = 0;
    int number = 0;
    for (auto p = begin; p != end; p++)
    {
        //не += (мало ли у нашего типа есть +, но нет +=)
        sum = sum + *p;
        number++;
    }
    return (sum / number);
}

template <class T>
auto mean_decl(T begin, T end) -> decltype(*begin+0)
{
    //в данном случае такое использование decltype не вызовет проблем навроде &int
    decltype(*begin+0) sum = *begin;
    int number = 1;
    for (auto p = ++begin; p != end; p++)
    {
        sum = sum + *p;
        number++;
    }
    return (sum / number);
}

int main(int argc, char *argv[])
{
    list<int> l {3, 5, 4, -2, 1, 4, 1, 21};
    vector<double> v {3.0, 5.0, 4.0, -2.0, 1.0, 4.0, 1.0, 21.0};
    cout << mean(l.begin(), l.end()) << endl;
    cout << mean(v.begin(), v.end()) << endl;
    cout << mean_decl(l.begin(), l.end()) << endl;
    cout << mean_decl(v.begin(), v.end()) << endl;

    return 0;
}
