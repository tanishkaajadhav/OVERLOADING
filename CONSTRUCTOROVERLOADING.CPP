#include <iostream>
using namespace std;

class Sample
{
private:
    int x, y;

public:
    Sample()
    {
        x = 0;
        y = 0;
    }

    Sample(int a, int b)
    {
        x = a;
        y = b;
    }

    void Display()
    {
        cout << "x = " << x << ", y = " << y << "\n";
    }
};

int main()
{
    Sample obj1;         
    Sample obj2(10, 20); 

    cout << "Using default constructor: ";
    obj1.Display();

    cout << "Using parameterized constructor: ";
    obj2.Display();

    return 0;
}

/* 
OUTPUT
Using default constructor: x = 0, y = 0
Using parameterized constructor: x = 10, y = 20
*/