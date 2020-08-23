#include <iostream>
using namespace std;

class MyClass {
    private:
        int a, b;

    public:
        MyClass(int x, int y)
        {
            cout<<"constructor called\n";
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
    MyClass c(10, 20);  //has its own a, b -> declared in heap
    MyClass d(1, 2);     //has its own a, b -> declared in heap
    d.describe();
    c.describe();
    return 1;
}
