#include "queue.h"

template<typename T>
T queue::pop()
{
    T pop_value = data.front();
    data.pop_front();
    return pop_value;
}
