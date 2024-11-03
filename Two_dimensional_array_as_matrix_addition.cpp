#include <iostream>
using namespace std;
 
int main() {
 
    // first matrix
    int A[2][3] = {
        {4, 8, 12}, 
        {5, 10, 15}
    };
 
    // second matrix
    int B[2][3] = {
        {7, 14, 21},
        {8, 16, 24}
    };
 
    // matrix to store the sum
    int sum[2][3];
 
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
 
            // sum of [i][j] elements of A and B is
            // stored in [i][j] position of sum
            sum[i][j] = A[i][j] + B[i][j];
        }
    }
 
    // print the sum matrix
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << sum[i][j] << ", ";
        }
 
        // to print elements in rows and columns format
        cout << endl;
    }
 
    return 0;
}
