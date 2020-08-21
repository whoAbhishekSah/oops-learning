//constructor
#include <bits/stdc++.h>
using namespace std;

class Dog{
  private:
    string color;

  public:
    string get_color(){
      return color;
    }
    string set_color(string c){
      color = c;
      return color;
    }
};

class LinkedList {

}

class MyStack{
  private:
    // int[50] ary;
    LinkedList l1;
    int lastItr = -1;
  public:
    void push(int n){
      l1.insert(n);
    }
    void pop(){
      l1.delete_last();
    }
    int top(){
      return l1.get_head();
    }
}

int main(){
  Dog d1;
  string color;
  cin>>color;
  d1.set_color(color);
  cout<<"Dog's color is"<<d1.get_color();
  return 0;
}
