#include <iostream>

#define ASSERT(condition) {if (!(condition)) {std::cout << "condition is not met"; return 1;}}

using namespace std;

int main()
{
    int i;
    cin >> i;
    ASSERT(i > 0);
    cout << "I'm still alive!";
    return 0;
}
