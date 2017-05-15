class shape
{
public:
    shape(int x_, y_) : x(x_), y(y_) {}
    virtual void draw() = 0;
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual ~shape() {}
protected:
    int x, y;

};

