#include <initializer_list>

template <typename T>
T sum(std::initializer_list<T> values)
{
    T summary = *(values.begin());
    for (auto p = std::next(values.begin()); p != values.end(); p++)
        summary += *p;
    return summary;
}
