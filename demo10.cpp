#include <iostream>
using namespace std;

class Fraction {
    private:
        int numerator;
        int denominator;

    public:
        Fraction(int x, int y = 1)
        {
            cout<<"parametrized constructor called\n";
            numerator = x;
            denominator = y;
        }
        ~Fraction()
        {
            cout<<"destructor  called for"<<numerator<<"\n";
        }
        void describe() {
            cout<<"Fraction is: "<<numerator<<"/"<<denominator<<endl;
        }
};

void xyz(){
    Fraction f1(10);
    f1.describe();
    return;
}

int main()
{
    Fraction f1(20);
    xyz();
    f1.describe();
    return 1;
}
