#include<iostream>
using namespace std;
 
 class Birds {
 	public:
 		Birds(){
 			cout<<"birds are of two types"<<endl;
 			
		 }
 };
  class Oviparous :public Birds {
  	public:
  		Oviparous(){
  			cout<<"Oviparous lay eggs"<<endl;
		  }
  };
  
  class Sparrow {
  	public:
  		void bird1(){
  			cout<<"iam sparrow"<<endl;
		  }
		  
  };
  class Hybridsparrow :public Oviparous,public Sparrow{
  	public:
  	void display(){
  	
 		bird1();
  		cout<<"HybridSparrow class is a combination of Oviparous and Sparrow."<<endl;
  		
	  }
  };
  int main(){
  	Hybridsparrow h1;
  	h1.display();
  	return 0;
  }
  
