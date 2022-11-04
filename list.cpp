/* 
Tej Hiremath
This program uses structs, pointers, and vectors to allow the user to input, read and terminate student data.
11/4/22
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

void DELETE(vector<Student*>& v, Student* s);
void ADD(vector<Student*>& v, Student* s);
void ACTION(vector<Student*>& v, Student* s);

int main() {
    vector<Student*> v;
    Student* s = new Student();
    ACTION(v, s);
}

void ACTION(vector<Student*>& v, Student* s) {

    //Variable Initialization
    char input[21] = { ' ' };
    char quit[] = "QUIT";
    char print[] = "PRINT";
    char add[] = "ADD";
    char del[] = "DELETE";
    bool valid = false;

    //Loop
    do {
        cout << "Enter 'ADD' to add new data, 'PRINT' to display existing data, or 'DELETE' to delete a students data" << endl;
        cin.getline(input, 21);
        if (!strcmp(input, add)) {
            Student* NewStudent = new Student();
            ADD(v, NewStudent);
            valid = true;
        }
        else if (!strcmp(input, print)) {
            int i = v.size();
            for (int j = 0; j < i; j++) {
                Student* s = v[j];
                cout << "----------------------------------------------" << endl;
                cout << (*s).FirstName << " " << (*s).LastName << endl;
                cout << "GPA: " << (*s).gpa << endl;
                cout << "ID: " << (*s).id << endl;
                cout << "----------------------------------------------" << endl;
            }
        }
        else if (!strcmp(input, del)) {
            DELETE(v, s);
        }
        else if (!strcmp(input, quit)) {
            cout << "Exiting Program";
        }
        else {
          cout << "Not a valid input" << endl;
        }
    } while (strcmp(input, quit));
}
