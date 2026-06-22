// #include <iostream>
// using namespace std;

// class Area
// {
// public:
//     // Area of Square
//     void area(int side)
//     {
//         cout << "Area of Square = " << side * side << endl;
//     }

//     // Area of Rectangle
//     void area(int length, int width)
//     {
//         cout << "Area of Rectangle = " << length * width << endl;
//     }
// };

// int main()
// {
//     Area a;

//     a.area(5);       // Square
//     a.area(4, 6);    // Rectangle

//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Shape
// {
// public:
//     void area()
//     {
//         cout << "Area of Shape" << endl;
//     }
// };

// class Circle : public Shape
// {
// public:
//     void area()
//     {
//         cout << "Area of Circle = π * r * r" << endl;
//     }
// };

// int main()
// {
//     Shape *s;
//     Circle c;

//     s = &c;

//     s->area();

//     return 0;
// }



#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area()
    {
        cout << "Area of Shape" << endl;
    }
};

class Circle : public Shape
{
public:
    void area() override
    {
        cout << "Area of Circle = π * r * r" << endl;
    }
};

class Rectangle : public Shape
{
public:
    void area() override
    {
        cout << "Area of Rectangle = length * width" << endl;
    }
};

class Triangle : public Shape
{
public:
    void area() override
    {
        cout << "Area of Triangle = (base * height) / 2" << endl;
    }
};

int main()
{
    Shape *s;

    Circle c;
    Rectangle r;
    Triangle t;

    s = &c;
    s->area();

    s = &r;
    s->area();

    s = &t;
    s->area();

    return 0;
}