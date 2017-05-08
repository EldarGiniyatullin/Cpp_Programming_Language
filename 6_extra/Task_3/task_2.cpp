#include <iostream>
#include <list>

using namespace std;


//значения в "разности" списков в отсортированном порядке, а не в изначальном,
//так как по поводу порядка чисел в результате условие задачи ничего не говорит
list<int> subtraction(const list<int>& minuend, const list<int>& subtrahend)
{
    list<int> min(minuend);
    list<int> sub(subtrahend);
    min.sort();
    sub.sort();
    list<int>::iterator iter_min = min.begin();
    list<int>::iterator iter_sub = sub.begin();
    while (iter_min != min.end() && iter_sub != sub.end())
    {
        if (*iter_min > *iter_sub)
            iter_sub++;
        else if (*iter_min < *iter_sub)
            iter_min++;
        else
        {
            iter_min = min.erase(iter_min);
        }
    }
    return min;
}

int main(int argc, char *argv[])
{
    list<int> a {5, 9, 3, 4, 5};
    list<int> b {3, 5};
    list<int> c {4, 9};
    cout << (subtraction(a, b) == c ? "It works!" : "It doesn\'t work!");
    return 0;
}
