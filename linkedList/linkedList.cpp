#include "linkedList.h"
#include <bits/stdc++.h>
using namespace std;


LinkedList::LinkedList(int x){
  cout<<"constructor called for LL\n";
}

void LinkedList::insertAtFront(int y)
{
  //...
  //...custom implementation
  cout<<"called with "<<y<<endl;
  return;
}

void LinkedList::justRandomPrivateMethod(int y)
{
  //...
  //...custom implementation
  cout<<"called from pvt mthd with "<< x + y<<endl;
  return;
}

void LinkedList::insertAtEnd(int y)
{
  //...
  //...custom implementation
  justRandomPrivateMethod(y);
  cout<<"called with "<<y<<endl;
  return;
}
