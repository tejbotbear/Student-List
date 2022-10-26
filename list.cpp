/*
Tej Hiremath
-
-
*/

#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

struct Student {
  char FirstName[10];
  char LastName[10];
  int id;
  float gpa;
};

void ADD(int& i,vector<Student*> &v, Student *s);

void ACTION(int& i, vector<Student*> &v, Student *s) {
  char Input = ' ';
  bool Valid = false;
  Valid = false;
  do {
    cout << "Enter 'p' to print a students data, or 'a' to add data. In addition 'd' can delete a students data." << endl;
    Input = ' ';
    cin >> Input;
    if (Input == 'p' && Input == 'a' && Input == 'd') {
      cout << "Not a valid input" << endl;
    } 
    else if (Input == 'p') {
      for (int j = 0; j < i; j++) {	
	Student *s = v[j];
	cout << "----------------------------------------------" << endl;
	cout << (*s).FirstName << " " << (*s).LastName << endl;
	cout << "GPA: " << (*s).gpa << endl;
	cout << "ID: " << (*s).id << endl;
	cout << "----------------------------------------------" << endl;
      }
    }
    else if (Input == 'd') {
      
    }
    else if (Input == 'a') {
      i++;
      ADD(i, v, s);
      Valid = true;
    }
  } while (Valid == false);
}

void ADD(int& i, vector<Student*> &v, Student *s) {
  v.push_back(s);
  cout << "First name?" << endl;
  cin >> (*s).FirstName;
  cout << "Last name?" << endl;
  cin >> (*s).LastName;
  cout << "GPA?" << endl;
  cin >> (*s).gpa;
  cout << "ID?" << endl;
  cin >> (*s).id;
  cout << "----------------------------------------------" << endl;
  cout << (*s).FirstName << " " << (*s).LastName << " has been registered." << endl;
  cout << "ID: " << (*s).id << endl;
  cout << "GPA: " << (*s).gpa << endl;
  cout << "----------------------------------------------" << endl;
  //v.push_back(s);
  ACTION(i, v, s);
}

int main() {
  int count = 0;
  int& i = count;
  vector<Student*> v;
  Student *s = new Student();
  ACTION(i, v, s);
}
