/**
 * Create a static variable count, static function in a class; create an object,
 * call increment function and display count value twice in order.
 */

#include <iostream>
using namespace std;

class Count {
    private:
        static int count;

    public:
        void setNum() {
            count++;
        }
        static void putCount() {
            cout << "Count:" << count << endl; // static function accessing static member
        }
};

int Count::count;

int main() {
    Count c1, c2;

    c1.setNum();
    c2.setNum();
    Count::putCount();

    return 0;
}