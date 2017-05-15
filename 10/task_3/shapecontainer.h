#include <vector>
#include <memory>
#include "shape.h"

using std::vector;
using std::unique_ptr;

class shapeContainer
{
public:
    shapeContainer() {}
    //не надо пробегаться по вектору и удалять все вручную
    ~shapeContainer() {}
    //сделать параметром unique<ptr> sh нельзя - не дадут deleted-методы из unique<ptr>
    void add(shape* sh)
    {
        collection.push_back(unique_ptr<shape>(sh));
    }

    double area() const
    {
        double sum = 0;
        for (auto sh: collection)
            sum += sh->area();
        return sum;
    }
private:
    vector<unique_ptr<shape> > collection;
};
