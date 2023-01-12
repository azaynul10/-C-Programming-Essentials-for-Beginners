
#include <iostream>
#include<iomanip>
using namespace std;


void mainFn() {
        float a,b,c,d,e;
        // Read the numbers using float datatype
        cin >> a >> b >> c >> d >> e;
        float sum = a + b + c + d + e;
        // Note: to print the answer accurately upto two places of decimal,
        //       use the set precision() method of iomanip library in C++ as shown
        
        cout << fixed << setprecision(2) << sum/5 ;
}
