// Bank can be made of multiple customers.[Array of customer]
// Customer can be made of 1 string(name), 1 number(id), 1 Address
// Address can be made of 5 string(flat no, street, locality, district,  state)

#include <bits/stdc++.h>
using namespace std;

class Address
{
private:
    string flat_no;
    string street;
    string locality;
    string district;
    string state;

public:
    Address()
    {
    }

    Address(string a, string b, string c, string d, string e)
    {
        flat_no = a;
        street = b;
        locality = c;
        district = d;
        state = e;
    }
    string getAddress()
    {
        return flat_no + street + locality + district + state;
    }
};

class Customer
{
private:
    string name;
    int id;
    Address *permanent_address;
    Address *present_address;
    int balance;

public:
    Customer() {}
    Customer(int x, string n, int y)
    {
        name = n;
        balance = y;
        id = x;
        permanent_address = NULL;
        present_address = NULL;
        // permanent_address = new Address("a", "a", "a", "a", "a");
        // present_address = new Address("a", "a", "a", "a", "a");
    }
    void setPermanentAddress(string a, string b, string c, string d, string e)
    {
        permanent_address = new Address(a, b, c, d, e);
        cout << "address set" << permanent_address->getAddress();
    }
    void setPresentAddress(string a, string b, string c, string d, string e)
    {
        present_address = new Address(a, b, c, d, e);
    }
    void showAddress()
    {
        if (permanent_address)
        {
            cout << "\nPermanent Address::\n";
            cout << permanent_address->getAddress();
        }
        if (present_address)
        {
            cout << "\nPresent Address::\n";
            cout << present_address->getAddress();
        }
    }
    void showDetails()
    {
        cout << "\nCustomer Id:\t" << id << "\nName:\t" << name << "\nbalance:\t" << balance << endl;
    }

    void showDetailsWithAddress()
    {
        showDetails();
        showAddress();
    }
};

class Bank
{
private:
    vector<Customer> customer_ary;
    int size;

public:
    Bank()
    {
        cout << "How many customers you want to start with\n";
        cin >> size;
        for (int i = 0; i < size; i++)
        {
            string x;
            int y;
            cout << "Enter detail for cusotmer no" << i + 1 << endl;
            cout << "enter name \n";
            cin >> x;
            cout << "enter starting balance \n";
            cin >> y;
            Customer c(i + 1, x, y);
            customer_ary.push_back(c);
        }
    }
    void describeAllCustomers()
    {
        for (int i = 0; i < size; i++)
        {
            customer_ary[i].showDetails();
        }
    }
    void describeAllCustomersInDetail()
    {
        for (int i = 0; i < size; i++)
        {
            customer_ary[i].showDetailsWithAddress();
        }
    }
    void setAddressForCustomer()
    {
        int n;
        cout << "Enter customer id\n";
        cin >> n;
        cout << "Which Address? Press 1 for permanent, press 2 for present\n";
        int y;
        cin >> y;
        if (y == 1)
        {
            string a, b, c, d, e;
            cout << "Enter flat_no, street, locality, distict, state\n";
            cin >> a >> b >> c >> d >> e;
            customer_ary[n - 1].setPermanentAddress(a, b, c, d, e);
        }
        else if (y == 2)
        {
            string a, b, c, d, e;
            cout << "Enter flat_no, street, locality, distict, state\n";
            cin >> a >> b >> c >> d >> e;
            customer_ary[n - 1].setPresentAddress(a, b, c, d, e);
        }
        else
        {
            cout << "Bad input\n";
        }
    }
};

int main()
{
    Bank bank;
    bank.describeAllCustomers();
    while (true)
    {
        cout << "set address\n";
        bank.setAddressForCustomer();
        bank.describeAllCustomersInDetail();
    }
}
