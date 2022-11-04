/*
Tej Hiremath
-
-
*/

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <cstring>
using namespace std;

struct Student {
  char FirstName[10];
  char LastName[10];
  int id;
  float gpa;
};

void DELETE(int& i, vector<Student*> &v, Student *s);
void ADD(int& i,vector<Student*> &v, Student *s);

void ACTION(int& i, vector<Student*> &v, Student *s) {
  char Input = ' ';
  bool Valid = false;
  do {
    cout << "Enter 'p' to print a students data, or 'a' to add data. In addition 'd' can delete a students data." << endl;
    //Input = ' ';
    cin >> Input;
    if (Input == 'p' && Input == 'a' && Input == 'd') {
      cout << "Not a valid input" << endl;
    } 
    else if (Input == 'p') {
      int i = v.size();
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
      DELETE(i, v, s);
    }
    else if (Input == 'a') {
      Student *NewStudent = new Student();
      ADD(i, v, NewStudent);
      Valid = true;
    }
  } while (Valid == false);
}

void DELETE(int& i, vector<Student*> &v, Student *s) {
  int DeleteID;
  char ConfirmDelete[6];
  char ref[6] = {'D', 'E', 'L', 'E', 'T', 'E'};
  cout << "Enter the ID of the student's data you are trying to remove" << endl;
  cin >> DeleteID;
  cin.ignore();
  for (int j = 0; j < i; j++) {
    Student *s = v[j];
    if (DeleteID == (*s).id) {
      cout << "Are you sure you want to remove " << (*s).FirstName << " " << (*s).LastName << " from the list? Type 'DELETE' to confirm." << endl;
      //cin.ignore();
      cin.getline(ConfirmDelete, 6);
      if (ConfirmDelete == ref) {
	cout << (*s).FirstName << " " << (*s).LastName << " has been removed from the list." << endl;
	delete s;
	v.erase(v.begin()+j);
	--i;
	ACTION(i,v,s);
      }
      else {
	cout << "Going back to action menu" << endl;
	ACTION(i,v,s);
      }
    }
  }
}

void ADD(int& i, vector<Student*> &v, Student *s) {
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
  v.push_back(s);
  ACTION(i, v, s);
}

int main() {
  int count = 0;
  int& i = count;
  vector<Student*> v;
  Student *s = new Student();
  ACTION(i, v, s);
}
