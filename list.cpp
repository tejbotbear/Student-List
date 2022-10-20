/*
Tej Hiremath
-
-
*/

#include <iostream>
using namespace std;

struct Students {

  char FirstName[10];
  char LastName[10];
  int id;
  float gpa;
};

void READ (int& i, Students roll[10]) {
  //Students roll[i];
  i = 1;

  cout << "First name?" << endl;
  cin >> roll[i].FirstName;
  cout << "Last name?" << endl;
  cin >> roll[i].LastName;
  cout << "GPA?" << endl;
  cin >> roll[i].gpa;
  cout << "ID?" << endl;
  cin >> roll[i].id;
  cout << "------------------------------------------------------" << endl;
  cout << roll[i].FirstName << " " << roll[i].LastName << " has been registered." << endl;

  cout << "ID: " << roll[i].id << endl;
  cout << "GPA: " << roll[i].gpa << endl;
}

int main() {
  int count = 0;
  int& i = count;
  Students roll[10];
  
  READ(i, roll);
}
