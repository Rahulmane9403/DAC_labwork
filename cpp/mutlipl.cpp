#include<iostream>
using namespace std;
 
 class Animal {
 	public:
 		Animal(){
 			cout<<"animal are of two type"<<endl;
		 }
 };

 class Wateranimal{
 	public:
 		Wateranimal(){
 			cout<<"water animal lives in water"<<endl;
 			
		 }
 };
  class landanimal{
 	public:
 		landanimal(){
 			cout<<"land animal lives on land"<<endl;
 			
		 }
 };

class frog:public Animal,public Wateranimal,public landanimal {
	public:
		void display(){
		cout<<"frog is animal who live in both"<<endl;
		}
	
};
int main ()
{
	frog f1;
	f1.display();
	return 0;
	
}



