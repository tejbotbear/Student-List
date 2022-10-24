/*
Tej Hiremath
-
-
*/

#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

struct Students {
  char FirstName[10];
  char LastName[10];
  int id;
  float gpa;
};

void ADD(vector<Students*> v);

void ACTION(int& i, vector<Students*> v) {
  char Input = ' ';
  bool Valid = false;
  Valid = false;
  do {
    cout << "Enter 'p' to print a students data, or 'a' to add data." << endl;
    Input = ' ';
    cin >> Input;
    if (Input == 'p' && Input == 'a') {
      cout << "Not a valid input" << endl;
    } 
    else if (Input == 'p') {
      cout << "----------------------------------------------" << endl;
      cout << (*s).FirstName << " " << (*s).LastName << endl;
      cout << "GPA: " << (*s).gpa << endl;
      cout << "ID: " << (*s).id << endl;
      Valid = true;
    }
    else if (Input == 'a') {
      ADD(v);
      Valid = true;
    }
  } while (Valid == false);
}

void ADD(vector<Students*> v) {
  //Students *s = new Students();
  cout << "First name?" << endl;
  cin >> (*s).FirstName;
  cout << "Last name?" << endl;
  cin >> (*s).LastName;
  cout << "GPA?" << endl;
  cin >> (*s).gpa;
  cout << "ID?" << endl;
  cin >> (*s).id;
  cout << "------------------------------------------------------" << endl;
  cout << (*s).FirstName << " " << (*s).LastName << " has been registered." << endl;
  cout << "ID: " << (*s).id << endl;
  cout << "GPA: " << (*s).gpa << endl;
}

int main() {
  int count = 0;
  int& i = count;
  vector<Students*> v;
  ACTION(i, v);
}
