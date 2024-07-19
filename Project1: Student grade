#include <iostream>
using namespace std;

double get_average_score(double scores[5])
{
  double sum = 0.0;

  for(int i=0; i<5;i++)
  {
    sum = sum + scores[i];
  }
  double average = sum/5.0;

  return average;
}

char compute_grade(double average)
{
    if (average >= 80.0)
    {
        cout << "Grade A" << endl;
        return 'A';
    }
    else if (average < 80.0 && average >=60.0)
    {
        cout << "Grade B" << endl;
        return 'B';
    }
    else if (average < 60.0 && average >=50.0)
    {
        cout << "Grade C" << endl;
        return 'C';
    }
    else
    {
        cout << "Grade F" << endl;
        return 'F';
    }
}

int main()
{
    double scores[5] = {55,54,75,65,90};

    double average_score = get_average_score(scores);
    cout << average_score << endl;

    char grade = compute_grade(average_score);
    return 0;
}
