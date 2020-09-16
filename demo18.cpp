// C++ program to demonstrate implementation
// of Inheritance

#include <bits/stdc++.h>
using namespace std;

//Base class
class Employee
{
	private:
        int employee_id;
        int salary;
        string designation;
    public:
        Employee(int x, int y, string a){
            cout<<"base ctr\n";
            employee_id = x;
            salary = y;
            designation = a;
        }
        void describe(){
            cout<<"\nEmployee id:\t"<<employee_id<<"\nSalary:\t"<<salary<<"\nDesignation:\t"<<designation<<endl;
        }
};

class ITEmployee : public Employee
{
    private:
        string expertise;

    public:
        ITEmployee(int x, int y, string a, string str) : Employee(x, y, a){
            cout<<"derived ctr\n";
            expertise = str;
        }
};


int main()
{
    ITEmployee it_emp_1(1, 1000, "IT E", "java, c++, python");  //is-A relationship
    it_emp_1.describe();
}
