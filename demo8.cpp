#include <iostream>
using namespace std;

class Fraction {
    private:
        int numerator, denominator;

    public:
        Fraction(int x, int y = 1)
        {
            cout<<"parametrized constructor  called\n";
            numerator = x;
            denominator = y;
        }
        void describe(){
            cout<<"Fraction is: "<<numerator<<"/"<<denominator<<endl;
        }
};

int main()
{
    Fraction f1(10);
    f1.describe();
    return 1;
}
