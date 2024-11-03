#include <iostream>
using namespace std;

int main()
{
    int number[5] = {1,2,3,4,5};
    int largest = *number;

    for(int i=1; i<5; i++)
    {
        if(largest < *(number + 1))
        {
            largest = *(number + 1);
        }
    }
    cout << "Largest: " << largest;
}
