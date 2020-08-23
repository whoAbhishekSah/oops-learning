#include <iostream>
using namespace std;

class MyClass {
    private:
        int a, b, c;

    public:
        MyClass()
        {
            cout<<"defualt constructor called\n";
            a = 20;
            b = 30;
            c = 40;
        }
        MyClass(int x, int y)
        {
            cout<<"parametrized constructor 1 called\n";
            a = x;
            b = y;
            c = 40;
        }

        MyClass(int x, int y, int z)
        {
            cout<<"parametrized constructor 2 called\n";
            a = x;
            b = y;
            c = z;
        }

        void describe(){
            cout<<"THe object is. a: "<<a<<" b: "<<b<<" c: "<<c<<endl;
        }
};

int main()
{
    MyClass c;
    MyClass d(1, 2);
    MyClass e(-1, -2, -3);
    d.describe();
    c.describe();
    e.describe();
    return 1;
}
