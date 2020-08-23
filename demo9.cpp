#include <iostream>
using namespace std;

class Fraction {
    private:
        int numerator;
        int denominator;

    public:
        int z;
        Fraction(int x, int y = 1)
        {
            cout<<"parametrized constructor  called\n";
            numerator = x;
            denominator = y;
            z = 20;
        }
        void set(int x, int y){
            numerator = x;
            denominator = y;
        }
        void describe() const{
            cout<<"Fraction is: "<<numerator<<"/"<<denominator<<endl;
        }
};

int main()
{
    const Fraction f1(10);
    f1.describe();
    cout<<f1.z<<endl;
    // f1.z = 30;  -> not allowed beachse object f1 is const object
    // f1.set(10, 3); -> not allowed because set is not a const method
    // f1.describe();
    return 1;
}
