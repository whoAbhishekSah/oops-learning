#include <bits/stdc++.h>
using namespace std;

//add is overloaded
//extended name -> 
class MyClass{
    public:
        float add(float x, float y){
            cout<<"add 1 called\n";
            return x + y;
        }
        float add(int x, int y){
            cout<<"add 2 called\n";
            return x + y;
        }
};

int main(int argc, char const *argv[])
{
    MyClass obj;
    cout<<obj.add(4, 5)<<endl;
    return 0;
}

