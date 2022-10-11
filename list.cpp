/*
Tej Hiremath
-
-
*/

#include <iostream>
using namespace std;

struct Students {

  char name[10];
  int id;
  float gpa;
};

int main() {
  Students george;
  cin >> george.name;
  george.id = 1234;
  george.gpa = 3.1;
  cout << george.name << " ID: " << george.id << " GPA: ";
  cout << george.gpa << endl;
}
