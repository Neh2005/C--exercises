#include <iostream>
using namespace std;

int main() {
    
    int students;

    // get input value for students
   cin >> students;
    // use the formula to calculate maximum possible handshakes and print it
    int combination = (students *(students -1))/2;
    cout << combination;
    
    return 0;
}

