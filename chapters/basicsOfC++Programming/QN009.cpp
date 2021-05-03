/**
 * Write a program to display n terms of fibonacci series using recursion.
 */

#include<iostream>
using namespace std;

int fibonacci(int);

int main() {
    int n, i = 0;

    cout << "Input the number of terms: ";
    cin >> n;
    cout << "Fibonacci series is as follows:\n";

    while(i < n){
        cout << " " << fibonacci(i);
        i++;
    }
    cout << "\n";

    return 0;
}

int fibonacci (int n){
    if((n == 1) || (n == 0)){
        return (n);
    }
    else{
        return(fibonacci(n - 1) + fibonacci(n - 2));
    }
}

