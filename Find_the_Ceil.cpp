Find the Ceil
Write a program that prints the ceil of the given Number N.

( ceil returns the smallest integer that is greater than or equal to x)

Input

15.5

Output
16

Answer:
#include <iostream>
#include <cmath>
using namespace std;


void mainFn() {
        // Read the number using float datatype
        float x;
        cin >> x;
        // use can use the ceil() method of cmath library in c++ 
        // for printing ceil of the number
        cout << ceil(x);
}
