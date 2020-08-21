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

int main(){
  Dog d1;
  string color;
  cin>>color;
  d1.set_color(color);
  cout<<"Dog's color is"<<d1.get_color();
  return 0;
}
