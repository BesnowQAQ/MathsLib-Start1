// MathsLib-test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "cVector.h"
using namespace std;
int main()
{
    // test class cVector
    cout << "----------Test cVector class----------" << endl;
    cVector a(1, 2, 3); 
    cVector b(2, 5, 7);
    cVector c;    // test default constructor
    double n = 3;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = ";
    c.show();
    cout << endl;
    cout << "n = " << n << endl;
    cout << "a.length() = " << a.length() << endl;
    cout << "a.normalize() = " << a.normalize() << endl;
    cout << "a x b = a.cproduct(b) = " << a.cproduct(b) << endl;
    cout << "a . b = a.dproduct(b) = " << a.dproduct(b) << endl;
    cout << "dist(a, b) = a.distance(b) = " << a.distance(b) << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "-a = " << -a << endl;
    cout << "a + n = " << a + n << endl;
    cout << "a - n = " << a - n << endl;
    cout << "a * n = " << a * n << endl;
    cout << "n + a = " << n + a << endl;
    cout << "n - a = " << n - a << endl;
    cout << "n * a = " << n * a << endl;
    cout << "----------Test cRay class----------" << endl;
    return 0;
}

