//////////////#include<iostream>
//////////////using namespace std;
////////////// 
//////////////// class definition
//////////////class Circle
//////////////{
//////////////    public: 
//////////////        double radius;
//////////////         
//////////////        double  compute_area()
//////////////        {
//////////////            return 3.14*radius*radius;
//////////////        }
//////////////     
//////////////};
////////////// 
//////////////// main function
//////////////int main()
//////////////{
//////////////    Circle obj; // classname objname;
//////////////     
//////////////    // accessing public datamember outside class
//////////////    obj.radius = 5.5;
//////////////     
//////////////    cout << "Radius is: " << obj.radius << "\n"; //5.5
//////////////    cout << "Area is: " << obj.compute_area(); //  return 3.14*radius*radius;
//////////////    return 0;
//////////////}
////////////#include<iostream>
////////////using namespace std;
////////////class Student{
////////////	
////////////	public:
////////////		int marks;
////////////		
////////////		float cgpa(){
////////////			
////////////			return (marks*9.81)/100;
////////////		}
////////////	
////////////};
////////////
////////////
////////////
////////////
////////////int main(){
////////////	Student s1;
////////////	s1.marks = 80;
////////////	cout << "marks is: " <<s1.marks << "\n"; 
////////////    cout << "cgpa is: " << s1.cgpa(); 
////////////    return 0;
////////////	
////////////}
//////////
//////////
//////////#include<iostream>
//////////using namespace std;
////////// 
//////////class Circle
//////////{   
//////////    // private data member
////////////    private: 
////////////        double radius;
//////////      
//////////    // public member function    
//////////    public:  
//////////	double radius;  
//////////        double  compute_area()
//////////        {   // member function can access private 
//////////            // data member radius
//////////            return 3.14*radius*radius;
//////////        }
//////////     
//////////};
//////////
//////////int main(){
//////////	Circle s1;
//////////	s1.radius = 80;
//////////	cout << "radius is: " <<s1.radius << "\n"; 
//////////    cout << "compute_area is: " << s1.compute_area(); 
//////////    return 0;
//////////}
////////
////////#include <iostream>
////////using namespace std;
//////// class Parent  // base class
////////{   
////////    protected:
////////    int id_protected; // protected protected – members
////////  };
////////class Child : public Parent  // derived class
////////{
////////    public:
////////    void setId(int id) // member function
////////    { 
////////        // Child class is able to access the inherited protected data members of base class
////////             id_protected = id;
////////    }
////////	void displayId()
////////    {
////////        cout << "id_protected is: " << id_protected << endl;
////////    }
////////};
//////// int main() {
////////     
////////    Child obj1;  // classname obj //
////////    obj1.id_protected;// pointing to base class prot 
////////	//check in lab 
////////  // member function of the derived class can access the protected data members of the base class
////////    obj1.setId(81);// derived 
////////    obj1.displayId();
////////
////////}
//////
////// #include <iostream>
//////using namespace std;
//////class Parent {
//////public:
//////    int id_p;
//////};
//////class Child : public Parent {
//////public:
//////    int id_c;
//////    void display()
//////    {
//////    	cout<<id_p;//allowed 
//////	}
//////};
////// int main()
//////{
//////    Child obj1; // derived class obj that takes charas fro base class
//////     // An object of class child has all data members and member functions of class parent
//////    obj1.id_c = 7;//allowed
//////    obj1.id_p = 91;//allowed
//////    cout << "Child id is: " << obj1.id_c << '\n';
//////    cout << "Parent id is: " << obj1.id_p << '\n';
//////    cout<<sizeof(obj1); 
//////}
////
//////
//////#include<iostream>
//////using namespace std;
//////class Grandfather{
//////	public:
//////		int age;
//////};
//////class Father : public Grandfather{
//////	public:
//////	int id;
//////	void display(){
//////		cout<<age;
//////	}
//////};
//////
//////int main(){
//////	Father d1;
//////	d1.id = 23;
//////	d1.age = 41;
//////	cout << "Father age is: " << d1.age << '\n';
//////    cout << "Name is: " << d1.id << '\n';
//////    cout<<sizeof(d1);
//////    return 0;
//////}
////
//// #include <iostream>
////using namespace std;
////class Parent
//// {
////	protected:
////    int id_p;
////};
////class Child : public Parent {
////public:
////    int id_c;
////    void display()
////    {
////    	cout<<id_p;// allowed
////	}
////};
//// int main()
////{
////    Child obj1;
////// An object of class child has all data members and member functions of class parent
////    obj1.id_c = 7;//allowed
//////    obj1.id_p = 91;//not allowed // only access when in public
////    cout << "Child id is: " << obj1.id_c << '\n';
////   // cout << "Parent id is: " << obj1.id_p << '\n';
////    cout<<sizeof(obj1);//8
////}
//
//#include <iostream>
//using namespace std;
//class Parent {
//public:
//    int id_p;
//};
//class Child : public Parent {
//public:
//    int id_c;
//};
// int main()
//{
//    Parent obj1;
// 
//       // obj1.id_c = 7;//error
//    obj1.id_p = 91;
//   // cout << "Child id is: " << obj1.id_c << '\n';//error
//    cout << "Parent id is: " << obj1.id_p << '\n';
//    cout<<sizeof(obj1);
//}

