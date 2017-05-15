#include <cmath>

class shape
{
public:
    shape(int x_, int y_) : x(x_), y(y_) {}
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual ~shape() {}
protected:
    int x, y;
};

class square: public shape {
    int size;
public:
    square(int x_, int y_, int size_) : shape(x_, y_), size(size_)
    {}
    double area() const override
    {
        return size*size;
    }
    double perimeter() const override
    {
        return 4*size;
    }
};

class rhomb: public shape {
    int w, h;
public:
    rhomb(int x_, int y_, int w_, int h_) : shape(x_, y_), w(w_), h(h_)
    {}
    double area() const override
    {
        return 2*w*h;
    }
    double perimeter() const override
    {
        return 4*sqrt(w*w+h*h);
    }
};

class circle: public shape {
    int radius;
public:
    circle(int x_, int y_, int radius_) : shape(x_, y_), radius(radius_)
    {}
    double area() const override
    {
        return M_PI*radius*radius;
    }
    double perimeter() const override
    {
        return 2*M_PI*radius;
    }
};
