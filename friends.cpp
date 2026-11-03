#include <bits/stdc++.h>
using namespace std;


//friend function private ko bhi access krr skta h
class Equilateral
{
    float a;
    float circumference;
    float area;

public:
    void setA(float a)
    {
        this->a = a;
        circumference = a * 3;
        area = (1.73 * a * a) / 4;
    }
    //this is if we want to friend a class
    friend class HW;
    //friend void PrintResults(Equilateral);
    //this is if we want to friend a function
};

class HW
{
public:
    void PrintResults(Equilateral et)
    {
        cout << et.circumference << endl;
        cout << et.area << endl;
    }
};

int main()
{
    Equilateral et;
    et.setA(3);
    HW h;
    h.PrintResults(et);
}