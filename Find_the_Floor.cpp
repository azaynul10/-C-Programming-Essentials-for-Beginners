Find the Floor
Write a program that prints the floor of the given Number N.

( floor returns the largest integer that is smaller than or equal to x)

Input

15.5

Output
15

Answer:
#include <iostream>
#include <cmath>
using namespace std;


void mainFn() {
        // Read the number using float datatype
        float ans;
        cin >> ans;
        // use can use the floor() method of cmath library in c++ 
        // for printing floor of the number
        cout << floor(ans);
}
