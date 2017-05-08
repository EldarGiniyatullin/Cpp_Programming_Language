#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sum_of_digits(int n)
{
    int sum = 0;
    n = abs(n);
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool sum_of_digits_less(int first, int second)
{
    return sum_of_digits(first) < sum_of_digits(second);
}

int main(int argc, char *argv[])
{
    vector<int> numbers;
    int n = 0;
    for (;;)
    {
        cin >> n;
        if (n == 0)
            break;
        numbers.push_back(n);
    }
    sort(numbers.begin(), numbers.end(), sum_of_digits_less);
    for (auto p = numbers.begin(); p != numbers.end(); p++)
        cout <<*p << " ";
    return 0;
}
