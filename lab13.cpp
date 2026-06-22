// // #include <iostream>
// // using namespace std;

// // class Complex
// // {
// // public:
// //     int r, i;

// //     Complex(int a, int b)
// //     {
// //         r = a;
// //         i = b;
// //     }

// //     // Overload + operator
// //     Complex operator+(Complex c)
// //     {
// //         return Complex(r + c.r, i + c.i);
// //     }

// //     // Display function
// //     void display()
// //     {
// //         cout << r << " + i" << i << endl;
// //     }
// // };

// // int main()
// // {
// //     Complex c1(2, 3), c2(1, 4);

// //     Complex c3 = c1 + c2;

// //     cout << "Result: ";
// //     c3.display();

// //     return 0;
// // }


// #include <iostream>
// using namespace std;

// class Complex
// {
// public:
//     int r, i;

//     Complex(int a, int b)
//     {
//         r = a;
//         i = b;
//     }

//     // Overload - operator
//     Complex operator-(Complex c)
//     {
//         return Complex(r - c.r, i - c.i);
//     }

//     void display()
//     {
//         cout << r << " + i" << i << endl;
//     }
// };

// int main()
// {
//     Complex c1(8, 6), c2(3, 2);

//     Complex c3 = c1 - c2;

//     cout << "Subtraction Result: ";
//     c3.display();

//     return 0;
// }


#include <iostream>
using namespace std;

class Complex
{
public:
    int r, i;

    // Constructor
    Complex(int a = 0, int b = 0)
    {
        r = a;
        i = b;
    }

    // Overload + operator
    Complex operator+(Complex c)
    {
        return Complex(r + c.r, i + c.i);
    }

    void input()
    {
        cout << "Enter Real Part: ";
        cin >> r;

        cout << "Enter Imaginary Part: ";
        cin >> i;
    }

    void display()
    {
        cout << r << " + i" << i << endl;
    }
};

int main()
{
    Complex c1, c2, c3;

    cout << "Enter First Complex Number" << endl;
    c1.input();

    cout << "\nEnter Second Complex Number" << endl;
    c2.input();

    c3 = c1 + c2;

    cout << "\nAddition Result: ";
    c3.display();

    return 0;
}