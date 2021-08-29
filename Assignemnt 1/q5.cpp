#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int tempCelsius;
    int tempFahrenheit;
    tempCelsius = 100;
    tempFahrenheit = 32 + 9 * tempCelsius/5;
    
   while (tempCelsius != tempFahrenheit) {
       tempCelsius--;
       tempFahrenheit = 32 + 9 * tempCelsius/5;

   }
   cout << tempFahrenheit << endl;
    return 0;
}