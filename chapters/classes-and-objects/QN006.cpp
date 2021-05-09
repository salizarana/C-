/**
 * Write a program to calculate average of two numbers using friend function.
 */

#include<iostream>
using namespace std;

class Average{
    int n1, n2;

    public:
    void getNum(){
        cin >> n1 >> n2;
    }

    friend int average(Average a);
};

int average(Average a){
    return ((a.n1 + a.n2) / 2);
}

int main(){
    Average obj;

    cout << "Enter any two numbers:\n";
    obj.getNum();
    cout << "Mean:" << average(obj) << "\n";

    return 0;
}