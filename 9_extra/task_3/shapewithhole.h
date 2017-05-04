#include "shape.h"
#include <memory>
#include <cmath>

class shapeWithHole : public shape
{
public:
    shapeWithHole(shape* sh, int radius_) : holedShape(sh), radius(radius_) {}

    // shape interface
    // реализации не вынес в .cpp, потому что операции простые
    double area() const
    {
        return holedShape.get()->area() - M_PI * radius * radius;
    }
    double perimeter() const
    {
        return holedShape.get()->perimeter() + 2 * M_PI * radius;
    }
private:
    //если не ошибаюсь, то, как и в задаче с shapeContainer,
    //из-за unique_ptr запретятся конструктор копирования и оператор присваивания
    std::shared_ptr<shape> holedShape;
    int radius;
};
