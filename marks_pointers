#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of students" << endl;
    int* numbers = new int[n];
    cin >> n;

    cout << "Enter the marks: " << endl;
    for(int i=0; i<n;i++)
    {
        cin >> *(numbers + i);
    }
    cout <<"Marks: ";

    for(int i=0;i<n; i++)
    {
        cout << *(numbers + i) << endl;
    }
    delete[] numbers;
    return 0;
}


