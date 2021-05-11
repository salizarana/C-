/**
 * Write a program to show an example of copy constructor.
 */

#include<iostream>
using namespace std;

class Point{
    private:
    double x, y;

    public:
    Point(double x1, double y1){
        x = x1;
        y = y1;
    }
    Point(const Point &p1){
        x = p1.x;
        y = p1.y;
    }

    int getX(){
        return x;
    }

    int getY(){
        return y;
    }
};

int main(){
    Point p1(10,15); // Normal constructor is called here
    Point p2 = p1; // Copy constructor is called here

    cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();
    cout << "\np2.x = " << p2.getX() << ", p2.y = " << p2.getY() << endl;
   
    return 0;
}