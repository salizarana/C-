/**
 * Write a program to illustrate an example of object as function arguments.
 */ 

#include<iostream>
using namespace std;

class Time {
    int hour;
    int min;
    int sec;

    public:
    void getdata ();
    void putdata ();
    void sumTime (Time,Time) ;
} ;

void Time :: getdata() {
    cout << "\nHour: ";
    cin >> hour;
    cout << "Minute: ";
    cin >> min;
    cout << "Second: ";
    cin >> sec;
}
void Time :: putdata () { 
    cout << hour << " hours " << min << " minutes " << sec << " seconds\n";
}

void Time :: sumTime(Time t1, Time t2) {
    sec = t1.sec + t2.sec;
	min = t1.min + t2.min + (sec / 60);
	hour = t1.hour + t2.hour + (min / 60);
	min = min % 60;
	sec = sec % 60;
}

int main() {
    Time t1, t2, t3;
    
    cout << "Enter time in hour, minute and second:\n";
    cout << "\nEnter Time #1" ;
    t1.getdata();
    cout << "\nEnter Time #2" ;
    t2.getdata();
    t3.sumTime(t1, t2);
    cout << "\nTime #1 : ";
    t1.putdata();
    cout << "Time #2 : ";
    t2.putdata();
    cout << "Total Time : ";
    t3.putdata();
    
    return 0;
}