/**
 * Write a program that takes students information(name, roll, address) from user
 * and display student information using class and object.
 */

#include<iostream>
using namespace std;

class student{
    char name[20];
    char address[20];
    int rollNo;

    public:
    void getDetails(void);
    void putDetails(void);
};

void student::getDetails(void){
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter address: ";
    cin >> address;
    cout << "Enter roll number: ";
    cin >> rollNo;
}

void student::putDetails(void){
    cout << "Name:" << name <<"\tAddress:" << address <<"\tRoll No.:" << rollNo;
}

int main() {
    student std[10];
    int n, i;

    cout << "Enter total number of students: ";
    cin >> n;

    for(i = 0; i < n; i++){
        cout << "Enter details of student " << i + 1 << ":\n";
        std[i].getDetails();
    }

    cout << "\nDetails of student: \n";
    for(i = 0; i < n; i++){
        std[i].putDetails();
        cout << "\n";
    }

    return 0;
}