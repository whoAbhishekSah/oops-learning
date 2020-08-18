#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
    public:
        int width;
        int length;
        void set(int w, int l)
        {
            width = w;
            length = l;
            return;
        }
        int area()
        {
            return width * length;
        }
};

int main()
{
    Rectangle r1;
    Rectangle r2;
    r1.set(3, 4);
    int x = r1.area();
    cout<<r1.width<<endl;
    cout<<r1.length<<endl;
    cout<<r1.area()<<endl;
    return 0;
}
