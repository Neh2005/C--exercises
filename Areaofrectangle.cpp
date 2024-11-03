#include <iostream>
using namespace std;

int main() {

    int length;
    int breadth;
 
    // get length and breadth input
    cin >> length >> breadth; 

    // find the area
    int Area = length * breadth;

    // print the area
    cout << Area << endl;

    // find the perimeter
    int perimeter = 2 * (length+breadth);

    // print the perimeter
    cout << perimeter;

    return 0;
}
