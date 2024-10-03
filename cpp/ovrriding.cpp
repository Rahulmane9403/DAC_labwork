#include<iostream>
using namespace std;
 
 class Parent {
 	public: 
 	void xyz()  {
 		cout<<"base function"<<endl;
 		
	 }
 		
 };
 class Child : public  Parent {
 	public:
 		void xyz(){
		 
 		cout<<"Derived Function"<<endl;
 		Parent::xyz() ;
} };
 int main ()
  {
      Child Child_Derived;
    Child_Derived.xyz();
    return 0;
  }
