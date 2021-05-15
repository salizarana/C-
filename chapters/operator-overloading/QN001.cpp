/**
 * Write a program to show an example of unary operator overloading.
 */

#include <iostream>
using namespace std;

class Count
{
private:
    int value;

public:
    // Constructor to initializa count to 5
    Count() : value(5) {}

    // Overload ++ when used as prefix
    void operator++()
    {
        ++value;
    }

    // Overload ++ when used as postfix
    void operator++(int)
    {
        value++;
    }

    void display()
    {
        cout << "Count: " << value << endl;
    }
};

int main()
{
    Count count;

    // Call the "void operator ++ (int)" function
    count++;
    count.display();

    // Call the "void operator ++ ()" function
    ++count;
    count.display();

    return 0;
}