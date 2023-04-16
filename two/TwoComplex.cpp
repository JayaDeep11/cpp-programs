#include <iostream>

using namespace std;

class Complex
{
    public:
        int real, img;
        Complex(int r, int i)
        {
            real = r;
            img = i;
        }

        // Binary Operator Overloading:

        // friend Complex operator +(Complex, Complex);   //using friend function

        Complex operator +(const Complex obj)             //using in class overloading
        {
            return Complex(real + obj.real, img + obj.img);
        }


        // Unary Operator Overloading:

        Complex operator -()
        {
            return Complex(-(real), -(img));
        }

        void printNum()
        {
            cout << real << " + i" << "(" << img << ")";
        }
};

// Complex operator +(Complex c1, Complex c2)                 //using friend function
// {
//     return Complex(c1.real + c2.real, c1.img + c2.img);
// }

int main()
{
    Complex a(3, 4);
    Complex b(14, -12);
    Complex c = a + b;
    cout << "Binary Operator Overloading (Addition) : ";
    c.printNum();
    cout << endl << "Unary Operator Overloading (Unary minus) : ";
    Complex d = -a;
    cout << "d = -a where a = ";
    a.printNum();
    cout << endl << "d = ";
    d.printNum();
    cout << endl;
}