#include <iostream>
using namespace std;

class MyClass {
    private:
        int a, b;

    public:
        MyClass()
        {
            cout<<"defualt constructor called\n";
            a = 20;
            b = 30;
        }
        MyClass(int x, int y)
        {
            cout<<"parametrized constructor called\n";
            a = x;
            b = y;
        }

        void describe(){
            cout<<"THe object is. a: "<<a<<" b: "<<b<<endl;
        }
};

int main()
{
    // Default constructor called automatically
    // when the object is created
    MyClass c;  //has its own a, b -> declared in heap
    MyClass d(1, 2);     //has its own a, b -> declared in heap
    d.describe();
    c.describe();
    return 1;
}
