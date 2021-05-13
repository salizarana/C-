/**
 * Write a program defining member function outside the class.
 */

#include<iostream>
using namespace std;

class Sum {
    public:
        int addition(int x, int y);
};

/* Defining member function outside the class
using scope resolution operator
*/
int Sum::addition(int x, int y) {
    return x + y;
}

int main() {
    Sum obj;
    int x, y, sum;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    sum = obj.addition(x, y);

    cout << "Sum of two numbers: " << sum << "\n";

    return 0;
}

