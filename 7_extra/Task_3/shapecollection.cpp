#include "shapecollection.h"

shapeCollection::shapeCollection()
{

}

shapeCollection::~shapeCollection()
{
    for (auto sh: a)
        delete a[i];
}

double shapeCollection::area() const
{
    double sum = 0;
    for (auto sh: a)
        sum += sh->area();
    return sum;
}
