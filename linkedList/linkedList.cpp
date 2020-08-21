#include "linkedList.h"
#include <bits/stdc++.h>
using namespace std;

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
  cout<<"called from pvt mthd with "<<y<<endl;
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
