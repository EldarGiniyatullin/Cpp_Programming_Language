#include "isperfect.h"
#include <cmath>
#include <numeric>

using std::list;

bool isPerfect(int n)
{
    if (n > 1)
    {
        list<int> divisors = allDivisors(n);
        //не использовал возможности C++17, потому что не знаю,
        //итеративная ли там реализация или рекурсивная
        int sum = std::accumulate(std::next(divisors.begin()), divisors.end(), *divisors.begin(), [] (int a, int b) {return a + b;});
        return (sum == n);
    }
    return false;
}

list<int> allDivisors(int n)
{
    list<int> divisors {1};
    for (int d = 2; d < ceil(sqrt(n)); d++)
        if (n % d == 0)
        {
            divisors.push_back(d);
            divisors.push_back(n / d);
        }
    return divisors;
}
