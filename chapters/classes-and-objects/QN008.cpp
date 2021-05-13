/**
 * Write a program to show an example of default constructor.
 */

#include<iostream>
using namespace std;

class DemoDC {
   private:
      int num1, num2 ;
      
   public:
      int num3, num4;
      DemoDC() {
         num1 = 10;
         num2 = 20;
         num3 = 30;
         num4 = 40;
      }
      void display() {
      cout << "num1 = " << num1 << endl;
      cout << "num2 = " << num2 << endl;
      }
};

int main() {
   DemoDC obj;

   obj.display();
   cout << "num3 = " << obj.num3 << endl;
   cout << "num4 = " << obj.num4 << endl;

   return 0;
}
