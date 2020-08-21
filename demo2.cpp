//constructor
#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
    private:
        int width;
        int length;

    public:
        int area()
        {
            return width * length;
        }
};

// good design philiosphy for a class - Hide everything.

class Address {
    private:
        string flat_number;
        string customer_id;
        string pin_code;
        string landline;
    public:
        void setAddress();
        void getPinCode(int customer_id);
};

//bank post wing takes work id and posts the atm card;
class BankPostWing{
    private:
        int workId;
        int customer_id;
        int package_id;
        Address addr;
    public:
        void sendPost();
};

//encapusaltion - Hiding the implementation
class Bank{
    private:
        int[] customer_id;
        int[] balances;
        // string[] customer_name;
        // char[][] customer_name;
        // g
        int x = journal[10]
        bool is_authorized(){
            return true;
        }

    public:
        void withdraw(int customer_id, int amount){
            //....
        }
        void deposit(int customer_id, int amount){
            is_authorized()
        }
}


/*benefits from encapsulation
1. Fixes(decides) the interface
2. security of data(attributes)
3. Implementation can be changed, without changing the interface
4.
*/

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

    b1.deposit()
}
