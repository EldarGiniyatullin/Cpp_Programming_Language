#include <iostream>

#include "days.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    Days a;
    cout << a.what_day_is_it(1, wstring("января"));
    cout << a.what_day_is_it(1, wstring("мая"));
    cout << a.what_day_is_it(1, wstring("февраля"));
    return 0;
}
