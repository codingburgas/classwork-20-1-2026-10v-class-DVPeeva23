// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../StaticLib1/mathLib.h"

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    cout << triangle(a, b, c);
    sum(a, b, c);
    
}