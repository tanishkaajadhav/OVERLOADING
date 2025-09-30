#include <iostream>
using namespace std;

class Complex
{
private:
    double real, imag;

public:
    Complex(double r = 0, double i = 0)
    {
        real = r;
        imag = i;
    }

    Complex operator+(const Complex &c)
    {
        return Complex(real + c.real, imag + c.imag);
    }

    void Display()
    {
        cout << real << " + " << imag << "i\n";
    }
};

int main()
{
    Complex c1(2, 3), c2(4, 5);
    Complex c3;

    c3 = c1 + c2;
    cout << "Sum of complex numbers: ";
    c3.Display();

    return 0;
}

/* 
OUTPUT
Sum of complex numbers: 6 + 8i
*/