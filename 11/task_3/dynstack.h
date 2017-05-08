#include <memory>

class DynStack
{
public:
    DynStack() : size(0), maxsize(10), p(new int[maxsize]) {}
    DynStack(DynStack && rv_stack) : size(rv_stack.size), maxsize(rv_stack.maxsize), p(rv_stack.p)
    {
        rv_stack.p = nullptr;
    }
    ~DynStack() { delete [] p; }
    DynStack& operator=(DynStack && rv_stack)
    {
        size = rv_stack.size;
        maxsize = rv_stack.maxsize;
        p = rv_stack.p;
        rv_stack.p = nullptr;
        return *this;
    }
    void push(int val);
    int pop();
    void print();
private:
    int size;
    int maxsize;
    int* p;
};
