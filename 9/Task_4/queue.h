#include <deque>
#include <initializer_list>

using std::deque;

template <typename T>

class queue
{
public:
    queue() : data(deque<T>())
    {}

    queue(std::initializer_list<T> values) : data(deque<T>(values))
    {

    }

    ~queue()
    {

    }

    void push(T&& value)
    {
        data.push_back(value);
    }

    T pop();
private:
    std::deque<T> data;
};
