#include <iostream>
#include <math.h>

using namespace std;

int main() {

    const int acc = 32;
    int t;
    int y;
    cout << "enter the time" << endl;
    
    cin >> t;

    y  = (acc/2) * t*t;

    cout << "An object in freefall for " << t << " seconds will fall " << y << " feet." << endl;
    
    
}