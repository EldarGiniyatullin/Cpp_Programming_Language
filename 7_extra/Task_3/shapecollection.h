#include <vector>

#include "shape.h"

using std::vector;

class shapeCollection
{
public:
    shapeCollection() {}
    ~shapeCollection();
    void add(shape* sh)
    {
        a.push_back(sh);
    }

    double area() const;
private:
    vector<shape *> collection;



};
