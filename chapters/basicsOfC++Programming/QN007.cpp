/**
 * Write a program to calculate circumference of circle using inline funtion.
 */

#include<iostream>
using namespace std;

inline float Circumference(float radius)
{
    return 2 * 3.1415 * radius;
}

int main()
{
  float radius;
  cout << "Enter radius of circle: ";
  cin >> radius;
  cout << "Area of circle using Inline Function is : " << Circumference(radius) << "\n";
  
  return 0;
}