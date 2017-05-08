#include <vector>
#include <memory>
#include "shape.h"

using std::vector;
using std::unique_ptr;

class shapeContainer
{
public:
    shapeContainer() {}
    ~shapeContainer() {}
    void add(shape* sh)
    {
        collection.push_back(unique_ptr<shape>(sh));
    }
    bool isAnyCircle() const
    {
        for (auto p = collection.begin(); p != collection.end(); p++)
        {
            if (typeid(**p) == typeid(circle))
                return true;
        }
        return false;
    }
private:
    vector<unique_ptr<shape> > collection;
};
