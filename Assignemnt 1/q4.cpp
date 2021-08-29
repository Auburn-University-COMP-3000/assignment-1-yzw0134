#include <iostream>
#include <math.h>
using namespace std;
const int waterWeight = 62.4;
double pi = 2 * acos(0.0);
int main(){
    double weightOfSphere;
    cout << "Input weight of the sphere in pounds." << endl;
    cin >> weightOfSphere;
    double radiusOfSphere;
    cout << "Input radius of the sphere in feet." << endl;
    cin >> radiusOfSphere;
    
    double buoyantForce = (4 * pi * pow(radiusOfSphere, 3) * waterWeight) / 3; 
    
    if(buoyantForce > weightOfSphere)
    {
        cout << "The sphere will float in water." << endl;

    }
    else {
        cout << "The sphere will sink in water." << endl;
    }

   
    return 0;
}