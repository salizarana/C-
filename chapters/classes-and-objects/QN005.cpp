/**
 * Write a program to illustrate an example of object as function arguments.
 */ 

#include<iostream>
using namespace std;

class Weight {
    int kilogram;
    int gram;

    public:
    void getdata ();
    void putdata ();
    void sumWeight (Weight,Weight) ;
} ;

void Weight :: getdata() {
    cout << "\nKilograms:";
    cin >> kilogram;
    cout << "Grams:";
    cin >> gram;
}
void Weight :: putdata () { 
    cout << kilogram << " Kgs. and " << gram << " grams.\n";
}

void Weight :: sumWeight(Weight w1,Weight w2) {
    gram = w1.gram + w2.gram;
    kilogram = gram / 1000;
    gram = gram % 1000;
    kilogram += w1.kilogram + w2.kilogram;
}

int main() {
    Weight w1,w2 ,w3; 

    cout << "Enter weight in kilograms and grams\n";
    cout << "\nEnter weight #1" ;
    w1.getdata();
    cout << "\nEnter weight #2" ;
    w2.getdata();
    w3.sumWeight(w1,w2);
    cout << "\nWeight #1 : ";
    w1.putdata();
    cout << "Weight #2 : ";
    w2.putdata();
    cout << "Total Weight : ";
    w3.putdata();
    
    return 0;
}