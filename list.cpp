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


void READ () {
  Students roll;

  cout << "First name?" << endl;
  cin >> roll.FirstName;
  cout << "Last name?" << endl;
  cin >> roll.LastName;
  cout << "GPA?" << endl;
  cin >> roll.gpa;
  cout << "ID?" << endl;
  cin >> roll.id;
  cout << "------------------------------------------------------" << endl;
  cout << roll.FirstName << " " << roll.LastName << " has been registered." << endl;

  cout << "ID: " << roll.id << endl;
  cout << "GPA: " << roll.gpa << endl;
}

int main() {
  //Students george;
  //cin >> george.FirstName;
  //cin >> george.LastName;
  //george.id = 1234;
  //george.gpa = 3.1;
  //cout << george.FirstName << " " << george.LastName << " ID: " << george.id << " GPA: ";
  //cout << george.gpa << endl;
   
  
  READ();
}
