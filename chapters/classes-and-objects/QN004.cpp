/**
 * Write a program to display information of two employees using object
 * array of a class Employee.
 */

#include<iostream>
using namespace std;

class Employee{
    char name[20];
    int salary;

    public:
    void getDetails(void);
    void putDetails(void);
};

void Employee::getDetails(void){
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter salary: ";
    cin >> salary;
}

void Employee::putDetails(void){
    cout << "Name:" << name << "\tSalary:" << salary;
}

int main() {
    Employee emp[2];
    int i;

    for(i = 0; i < 2; i++){
        cout << "Enter details of employee: \n";
        emp[i].getDetails();
    }

    cout << "\nDetails of employee:\n";
    for(i = 0; i < 2; i++){
        cout<< i + 1 << ". ";
        emp[i].putDetails();
        cout << "\n";
    }

    return 0;
}