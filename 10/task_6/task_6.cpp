#include <iostream>
#include "shapecontainer.h"

using namespace std;

int main()
{
    shapeContainer a;
    a.add(new square(0, 0, 4));
    a.add(new rhomb(2, -3, 4, 6));
    cout << "Container has " << (a.isAnyCircle() ? "some circles" : "no any circle") << endl;
    a.add(new circle(1, 1, 4));
    cout << "Container has " << (a.isAnyCircle() ? "some circles" : "no any circle") << endl;
    return 0;
}
