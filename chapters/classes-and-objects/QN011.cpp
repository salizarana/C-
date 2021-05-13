/**
 * Write a program to show an example of copy and parameterized constructor with
 * default arguments.
 */

#include<iostream>
using namespace std;

class Point{
    private:
        double x, y;

    public:
        Point(double x1 = 10, double y1 = 15) { //  default arguments
            x = x1;
            y = y1;
        }
        Point(const Point &p1) {
            x = p1.x;
            y = p1.y;
        }
        int getX() {
            return x;
        }
        int getY() {
            return y;
        }
};

int main() {
    Point p1;
    Point p2 = p1;

    cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();
    cout << "\np2.x = " << p2.getX() << ", p2.y = " << p2.getY() << endl;
   
    return 0;
}