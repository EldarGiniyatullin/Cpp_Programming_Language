#include <iostream>
#include "shapewithhole.h"

using namespace std;

int main()
{
    shape* rectH1 = new shapeWithHole(new rect(0, 0, 100, 200), 20);
    shape* circleH1 = new shapeWithHole(new circle(0, 0, 70), 50);
    shape* rect1 = new rect(0, 0, 100, 200);
    shape* circle1 = new  circle(0, 0, 70);
    cout << rectH1->area() << endl;
    cout << circleH1->perimeter() << endl;
    cout << rect1->area() << endl;
    cout << circle1->perimeter() << endl;
    return 0;
}
