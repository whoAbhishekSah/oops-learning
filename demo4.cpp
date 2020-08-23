#include <iostream>
using namespace std;

class MyClass {
    public:
        int a, b;
        MyClass()
        {
            cout<<"constructor called";
            a = 10;
            b = 20;
        }
};

int main()
{
    // Default constructor called automatically
    // when the object is created
    MyClass c;
    cout << "a: " << c.a << endl
         << "b: " << c.b;
    return 1;
}
