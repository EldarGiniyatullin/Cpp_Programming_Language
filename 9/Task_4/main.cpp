#include <iostream>

#include "queue.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{

    queue<int> q {22, 5, -6, 34};
    q.push(3);
    q.push(7);
    q.push(11);
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    return 0;
}
