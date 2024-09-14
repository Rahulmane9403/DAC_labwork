#include<iostream>
using namespace std;


class Animal {
public:
    void eat(){
    cout << "animal is eating" <<endl;
    }
};

class Mammal {
public :
    void walk(){
    cout << "mammal is walking" <<endl;
    }
};

class Dog : public Animal, public Mammal {
public:
    void bark(){
        cout << "dog is barking" <<endl;
    }
};

int main() {
    Dog dog;
    dog.eat();
    dog.walk();
    dog.bark();

    return 0;
}
