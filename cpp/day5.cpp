//////#include<iostream>
//////using namespace std;
//////class A
//////{
//////	int c;
//////public:
//////	int a;
//////protected:
//////	int b;
//////public:
//////	void display()
//////	{
//////		cout<<"in display of A\n";
//////	}
//////};
//////class B:private A
//////{
//////public:
//////	int c;
//////public:
//////	void show()
//////	{
//////	    display();//allowed
//////		cout<<a<<b;
//////	}
//////};
//////class C:private B
//////{
//////	public:
//////	void show()
//////	{
//////	   // display(); not allowed
//////		//cout<< a<<b; not allowed
//////		cout<<c;
//////	}
//////};
//////int main()
//////{
//////	B bobj;// Class obj
//////	bobj.show();
////////	bobj.display(); not allowed
//////}
////////////
////////////#include <iostream> 
////////////using namespace std; 
////////////  
////////////// base class 
////////////class Base { 
////////////public: 
////////////    virtual void function1() 
////////////    { 
////////////        cout << "Base function1()" << endl; 
////////////    } 
////////////    virtual void function2() 
////////////    { 
////////////        cout << "Base function2()" << endl; 
////////////    } 
////////////    virtual void function3() 
////////////    { 
////////////        cout << "Base function3()" << endl; 
////////////    } 
////////////}; 
////////////  
////////////// class derived from Base 
////////////class Derived1 : public Base { 
////////////public: 
////////////    // overriding function1() 
////////////    void function1() 
////////////    { 
////////////        cout << "Derived1 function1()" << endl; 
////////////    } 
////////////    // not overriding function2() and function3() 
////////////}; 
////////////  
////////////// class derived from Derived1 
////////////class Derived2 : public Derived1 { 
////////////public: 
////////////    // again overriding function2() 
////////////    void function2() 
////////////    { 
////////////        cout << "Derived2 function2()" << endl; 
////////////    }
////////////	void function3() 
////////////    { 
////////////        cout << "Derived3 function2()" << endl; 
////////////    } 
////////////    // not overriding function1() and function3() 
////////////}; 
////////////
//////////////class Derived3 : public Derived2 { 
//////////////public: 
//////////////    // overriding function1() 
//////////////    void function3() 
//////////////    { 
//////////////        cout << "Derived1 function1()" << endl; 
//////////////    } 
//////////////    // not overriding function2() and function3() 
//////////////};
////////////  
////////////// driver code 
////////////int main() 
////////////{ 
////////////    // defining base class pointers 
////////////    Base* ptr1 = new Base(); 
////////////
////////////    Base* ptr2 = new Derived1(); 
////////////    Base* ptr3 = new Derived2(); 
////////////    // for three class three ptr is requied
////////////    // and made three vtable
//////////////    Base* ptr4 = new Derived2(); 
////////////    
////////////    
////////////  
////////////    // calling all functions 
////////////    ptr1->function1(); //
////////////    ptr1->function2(); 
////////////    ptr1->function3(); 
////////////    ptr2->function1(); //"Derived2 function1()"
////////////    ptr2->function2(); 
////////////    ptr2->function3(); 
////////////    ptr3->function1(); 
////////////    ptr3->function2(); //de
////////////    ptr3->function3(); 
////////////  
////////////    // deleting objects 
////////////    delete ptr1; 
////////////    delete ptr2; 
////////////    delete ptr3; 
////////////  
////////////    return 0; 
////////////}
//////////
//////////#include<iostream>
//////////using namespace std;
////////// 
//////////class A
//////////{
//////////public:
//////////  A()  { cout << "A's constructor called" << endl; } //2
//////////};
////////// 
//////////class B
//////////{
//////////public:
//////////  B()  { cout << "B's constructor called" << endl; } //1
//////////};
////////// 
//////////class C: public A, public B  // Note the order B A
//////////{
//////////public:
//////////  C()  
//////////  { 
//////////  cout << "C's constructor called" << endl; //3
//////////  }
//////////};
////////// 
//////////int main()
//////////{
//////////    C c;
//////////    return 0;
//////////}
////////
////////#include<iostream>
////////using namespace std;
//////// 
////////class A
////////{
////////	int a;
////////public:
////////  A()  { cout << "A's constructor called" << endl; }
////////  A(int p) //2 10
////////{
////////    cout << "A's para constructor called" << endl;//2
////////}
////////};
//////// 
////////class B
////////{
////////	int b;
////////public:
////////  B()  { cout << "B's constructor called" << endl; }// in the intialing list B() call//1
////////  B(int q)
////////  { 
////////  		cout << "B's para constructor called" << endl;
////////  }
////////};
//////// 
////////class C: public A, public B  // Note the order  B then A
////////{
////////public:
////////  C(int p,int q):A(p),B(p) // 10 20 //first B() then A(para)
////////    { 
////////	cout << "C's paraconstructor called" << endl; //3
////////	}
////////};
//////// 
////////int main()
////////{
////////    C c(10,20);//
////////    return 0;
////////}
//////
//////#include<iostream>
//////using namespace std;
//////class A
//////{ 
//////
//////};
//////class C
//////{
//////
//////};
//////class B: public A,public B
//////{
//////
//////};
//////int main(){
//////	B bobj;
//////    bobj.func();
//////	
//////}
////
////#include <iostream>  
////#include <conio.h>  
////  
////using namespace std;  
////  
////// create class A  
////class A  
////{  
////    public:   
////    void show()  
////    {  
////        cout << " It is the member function of class A " << endl;  
////    }  
//// };   
////   
//// // create class B  
//// class B  
////{  
////    public:   
////    void show()  
////    {  
////        cout << " It is the member function of class B " << endl;  
////    }  
//// };  
////   
////   
//// // create a child class to inherit the member function of class A and class B  
//// class child: public A, public B  // A B
//// {  
////    public:  
////        void disp()  
////        {  
////            cout << " It is the member function of the child class " << endl;  
////         }  
//// };  
////   
//// int main ()  
//// {  
////    // create an object of the child class to access the member function  
////    child ch;  
//////    ch.show(); // It causes ambiguity   
////    ch.disp();  
////    return 0;  
//// }  
//
//#include<iostream>
//using namespace std;
//class Person {
//   // Data members of person 
//public:
//    Person(int x)  { cout << "Person::Person(int ) called" << endl;   }// 30 1 //30 3 // constructor 2 times call
//};
// 
//class Faculty : public Person {
//   // data members of Faculty
//public:
//    Faculty(int x):Person(x)   { // 30
//       cout<<"Faculty::Faculty(int ) called"<< endl;//2
//    }
//};
// 
//class Student : public Person {
//   // data members of Student
//public:
//    Student(int x):Person(x) { // 30 
//        cout<<"Student::Student(int ) called"<< endl;//4
//    }
//};
// 
//class TA : public Faculty, public Student  { // fac stud
//public:
//    TA(int x):Student(x), Faculty(x)   {
//        cout<<"TA::TA(int ) called"<< endl;//5
//    }
//};
// 
//int main()  {
//    TA ta1(30);// Class obj
//}


#include<iostream>
using namespace std;

class A
{

public:
 A()  { cout << "A's default constructor called" << endl; }
 A(int p)  { cout << "A's para constructor called" << endl; } //4 
};

class B:virtual public A
{

public:
 B()  { cout << "B's constructor called" << endl; }//2
  B(int b)  { cout << "B's para constructor called" << endl; }
};

class C:virtual public A  // Note the order
{
public:
 C()
   { 
	cout << "C's default constructor called" << endl; 
	}
	C(int a) // paramertized constr call 1
   { 
	cout << "C's para constructor called" << endl; //1
	}
};
class D:public C,public B  // Note the order // 1c 2b 3d
{
public:
 D(int p,int q,int r):C( q),B(),A(p) // para D() : inatiling list c b a
    { 
	cout << "D's para  constructor called" << endl; //3
	}
};
int main()
{
 D dobj(10,20,30); // class D dobj
}

#include<iostream>
using namespace std;
class Person {
public:
    Person(int x)  { cout << "Person::Person(int ) called" << endl;   } //1 
    Person()     { cout << "Person::Person() called" << endl;   }
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
 
class TA : public Faculty, public Student  {// Faculty Student
public:
    TA(int x):Student(x), Faculty(x)   {
        cout<<"TA::TA(int ) called"<< endl;///4
    }
};
 
int main()  {
    TA ta1(30);//class obj
}
