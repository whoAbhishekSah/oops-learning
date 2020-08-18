//constructor
#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
    public:
        int width;
        int length;
        int area()
        {
            return width * length;
        }
};

int main()
{
    Rectangle r1;
    // r1.set(3, 4);

    int x = r1.area();
    r1.width = 3;
    r1.length = 4;
    cout<<r1.width<<endl;
    cout<<r1.length<<endl;
    cout<<r1.area()<<endl;
    // r1.set(5, 6);
    r1.width = 7;
    r1.length = 5;
    cout<<r1.area()<<endl;
    return 0;
}
