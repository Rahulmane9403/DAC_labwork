
#include <iostream>
using namespace std;
class Birds {
 public:
 void type() {
 cout << "I'm an oviparous bird" << endl;
 }
};

class pigeon: public Birds{
 public:
 void name1() {
 cout << "I am a pigeon." << endl;
 }
};

class Sparrow: public Birds {
 public:
 void name2() {
 cout << "I am a sparrow." << endl;
 }
};

int main() {
 pigeon p; 
 cout << "\npigeon Class:" << endl;
 p.type();
 p.name1();

 Sparrow h; 
 cout << "\nSparrow Class:" << endl;
 h.type();
 h.name2();

 return 0;
} 
