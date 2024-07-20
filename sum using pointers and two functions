#include <iostream>
using namespace std;
 
// function that returns address
// of variable that contains sum of numbers
int* add(int n1, int n2, int* sum) {
 
    // create sum variable inside function
    * sum = n1 + n2;
 
    // return address of sum variable
    return sum;
}
 
int main() {
 
    // call the add() function
    // store the return value in sum pointer
    int sum;
    int* result = add(32, 10, &sum);

    // print the value in sum pointer
    cout << "Sum: " << *result << endl;
 
    return 0;
}
