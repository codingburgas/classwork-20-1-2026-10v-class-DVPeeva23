#include "pch.h"
#include "mathLib.h"
#include <iostream>

using namespace std;

double triangle(double a, double b, double c)
{
    return a + b + c;
}

void sum(double a, double b, double c)
{
    cout << "Triangle sides:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
}