#include <iostream>
using namespace std;

//Low cohesion class -> where members are not usign each other very efficeintly
class Car
{
private:
    int speakerVolume;
    int brakeLevel;
    int oilQuantity;
    int lightIntensity;
    int airPressure;

public:
    void increaseSound(int x)
    {
        speakerVolume += x;
    }
    void refillOil(int y)
    {
        oilQuantity += y;
    }
};

//Let's make it High Cohesion:
class Brake
{
private:
    int level;

public:
    void increaseSound(int x)
    {
        level += x;
    }
};

class Oil
{
private:
    int quantity;

public:
    void increaseOil(int y)
    {
        quantity += y;
    }
};
