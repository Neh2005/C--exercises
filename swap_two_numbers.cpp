#include <iostream>
using namespace std;

int main()
{
    double current_salary = 45.45;
    double updated_salary = 782.89 , t ;

    t=updated_salary;
    updated_salary=current_salary;
    current_salary=t;

    cout << "Current salary : " << current_salary << endl;
    cout << "Updated salary : " << updated_salary;

    return 0;
}
