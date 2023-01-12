Simple Interest Calculator
In this exercise you will build a simple interest calculator.
Simple Interest = (P x T x R)/100

Where,

P is the principal amount

R is the rate and

T is the time

Build a program that reads P, R, and T and prints the Simple Interest (to nearest integer)



Input

P = 10000
R = 5
T = 5
Output
2500

Answer:
#include <iostream>
using namespace std;


void mainFn() {
        float P,R,T;
        cin >> P >> R >> T;
        int product = P*R*T;
        cout <<(int)product/100;
        // Read and write using float datatype
        // order of input - P,R and then T
        // Use integer datatype for simple interest 
}
