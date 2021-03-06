#include <iostream>
using namespace std;

// generic- could be used in bike ans well car, which means it is very loosley coupled
class Brake
{
private:
    int level;

public:
    void increaseBreak(int x)
    {
        level += x;
    }
};

//generic - could be used in bike ans well car, which means it is very loosley coupled
class Oil
{
private:
    long quantity;

public:
    void increaseOil(int y)
    {
        quantity += y;
    }
};

//Car is coupled with Brake and Oil - Also very particular
class Car
{
private:
    Brake brake;
    Oil oil;

public:
    void increaseBrake(int x)
    {
        brake.increaseBreak(x);
    }
    void refillOil(int y)
    {
        oil.increaseOil(y);
    }
};

//has A relationship
