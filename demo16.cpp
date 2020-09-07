//deep copy, shallow copy


#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    int roll_number, m1, m2;
    string name;

public:
    Student(int roll, int a, int b, string s)
    {
        name = s;
        roll_number = roll;
        m1 = a;
        m2 = b;
    }

    // Copy constructor
    Student(const Student &s)
    {
        cout << "\nCopy constructor called\n";
        name = s.name;
        roll_number = s.roll_number;
        m1 = s.m1;
        m2 = s.m2;
    }
    void describe()
    {
        cout << "\nStudent \n";
        cout << "Roll\t" << roll_number << "\tmarks:\t" << m1 << "\t" << m2 << endl;
    };

    void setM1(int a) { m1 = a; }
    void setM2(int a) { m2 = a; }
};

class SpecialStudent
{
private:
    int roll_number;
    int *marks;
    string name;

public:
    SpecialStudent(int roll, int a, int b, string s)
    {
        name = s;
        roll_number = roll;
        marks = new int[2];
        marks[0] = a;
        marks[1] = b;
    }

    // Copy constructor
    SpecialStudent(const SpecialStudent &s)
    {
        cout << "\nCopy constructor called\n";
        name = s.name;
        roll_number = s.roll_number;
        marks = s.marks;
    }
    void describe()
    {
        cout << "\nStudent \n";
        cout << "Roll\t" << roll_number << "\tmarks:\t" << marks[0] << "\t" << marks[1] << endl;
    };

    void setM1(int a) { marks[0] = a; }
    void setM2(int a) { marks[1] = a; }
};

int main()
{
    Student s1(1, 10, 20, "abcd"); // Normal constructor is called here
    Student s2 = s1;               // Copy constructor is called here

    s1.describe();
    s2.describe();
    s1.setM1(20);
    s1.setM2(30);
    s1.describe();
    s2.describe();

    SpecialStudent ss1(1, 10, 20, "abcd"); // Normal constructor is called here
    SpecialStudent ss2 = ss1;               // Copy constructor is called here

    ss1.describe();
    ss2.describe();
    ss1.setM1(20);
    ss1.setM2(30);
    ss1.describe();
    ss2.describe();
    return 0;
}
