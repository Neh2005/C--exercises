#include <iostream>
using namespace std;

int main() {
    
    double celsius;
    double fahrenheit;
    
    // take temperature in degree celsius from the user
    cin >> celsius;
    
    // convert celsius temperature to fahrenheit using the formula
    fahrenheit = (celsius * 1.8) + 32;
    
    // print the temperature in fahrenheit
    cout << fahrenheit;

    return 0;
}