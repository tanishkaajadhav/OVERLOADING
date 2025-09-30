#include <iostream>
using namespace std;

class Overload
{
public:
    int Add(int a, int b)
    {
        return a + b;
    }

    double Add(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    Overload obj;
    int x = 10, y = 20;
    double p = 5.5, q = 4.5;

    cout << "Sum of integers: " << obj.Add(x, y) << "\n";
    cout << "Sum of doubles: " << obj.Add(p, q) << "\n";

    return 0;
}

/* 
OUTPUT
Sum of integers: 30
Sum of doubles: 10

*/