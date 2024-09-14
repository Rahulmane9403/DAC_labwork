//#include<iostream>
//using namespace std;
//
//
//class A{
//	public:
//		A(int x){
//			cout<<"IN Class A"<<endl;//1
//		}
//		A(){ 
//		 cout << "A's default constructor called" << endl; 
//		}
//		
//		
//};
//
//class B: virtual public A{
//	public:
//	B(){ 
//		 cout << "B's default constructor called" << endl; 
//		}
//	B(int x):A(x){
//			cout<<"IN Class B"<<endl;//2
//		}
//	
//};
//
//class C:virtual public A{
//	public:
//	C(){ 
//		 cout << "C's default constructor called" << endl; 
//	}
//	C(int x):A(x){
//			cout<<"IN Class C"<<endl;//3
//		}
//	
//};
//
//class child:public B,public C{
//	public:
//	child(int x):B(x),C(x){ //default constructor of ‘Person’ is called.When we use ‘virtual’ keyword
//			cout<<"IN Class child"<<endl;//4
//		}
//};
//
//int main(){
//	child ch(30);
//	
//	return 0;
//}


#include<iostream>
using namespace std;
class Person {
public:
    Person(int x)  { cout << "Person::Person(int ) called" << endl;   }
    Person()     { cout << "Person::Person() called" << endl;   }//1
};
 
class Faculty : virtual public Person {
public:
    Faculty(int x):Person(x)   {
       cout<<"Faculty::Faculty(int ) called"<< endl;//2
    }
};
 
class Student : virtual public Person {
public:
    Student(int x):Person(x) {
        cout<<"Student::Student(int ) called"<< endl;//3
    }
};
 
class TA : public Faculty, public Student  {
public:
    TA(int x):Student(x), Faculty(x), Person(x)   {
        cout<<"TA::TA(int ) called"<< endl;///4
    }
};
 // not allowed to call the grandparent’s constructor directly, 
 //it has to be called through parent class. It is allowed only when ‘virtual’ keyword is used.
int main()  {
    TA ta1(30);
}
