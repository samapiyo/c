#include <iostream>
using namespace std;
int main()
{
  int marks(5);
  int admission;
  int average;
  int total;
  string name;
  char grade;
  cout << "Please enter your name: ";
  cin >> name;
  cout << "Please enter your admission: ";
  cin >> admission;
  for (int i = 0; i < 5; i++)
  {
    cout << "Please enter your marks: " << i + 1 << ": ";
    cin >> marks;
    total += marks;
    average = total / 5;
    if (average >= 70)
      grade = 'A';
    else if (average >= 60)
      grade = 'B';
    else if (average >= 50)
      grade = 'C';
    else if (average >= 40)
      grade = 'D';
    else
      grade = 'E';
  }
  cout << "NAME: " << name << endl;
  cout << "ADMISSION: " << admission << endl;
  cout << "AVERAGE: " << average << endl;
  cout << "TOTAL: " << total << endl;
  cout << "GRADE:" << grade << "  very good" << endl;
  return 0;
}
