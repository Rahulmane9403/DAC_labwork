#include<iostream>
using namespace std;
 
 class Animal {
 	public:
 		void eat(){
 			cout<<"animal is eating"<<endl;
 			
		 }
 };
 
 	class Dog: public Animal {
 		public:
 		void bark() {
 			cout<<"dog is barking"<<endl;
 			
		 }
	 };
	 class Babydog:public Dog {
	 	public:
	
	 		void smile(){
	 			cout<<"babydog is smiling"<<endl;
			 }
	 };

	 int main() {
	 	Babydog dog;
	 	dog.eat();
	 	dog.bark();
	 	dog.smile();
	 	
	 	return 0;
	 }
	  
	
