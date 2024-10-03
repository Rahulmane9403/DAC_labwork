////////#include <iostream>
////////using namespace std;
//////// class Demo {
////////private:
////////    int private_variable;
//////// protected:
////////    int protected_variable;
//////// 
////////public:
////////    Demo()
////////    {
////////        private_variable = 10;
////////        protected_variable = 99;
////////    }
////////     // friend class declaration
////////    friend class F;
////////};
//////// // Here, class F is declared as a friend inside class Demo. Therefore,
////////// F is a friend of class Demo. Class F can access the private/PROTECTED members of class Demo.
////////class F {
////////public:
////////    void display(Demo& t)
////////    {
////////        cout << "The value of Private Variable = "<< t.private_variable << endl;
////////        cout << "The value of Protected Variable = "<< t.protected_variable;
////////    }
////////};
////////int main()
////////{
////////    Demo g;
////////    F fri;
////////    fri.display(g);
////////    return 0;
////////}
//////
//////
//////#include <iostream>
//////using namespace std;
//////
//////class student{
//////	private:
//////	    int x;
//////		int y;
//////	public:
//////	student(){
//////		int x =10;
//////		int y = 100;
//////	}
//////	friend class fri;
//////};
//////
//////class fri{
//////	public:
//////	void display(student& t){
//////		cout<<"in class student"<<t.x<<endl;
//////		cout<<"in class student"<<t.y<<endl;
//////	}
//////	
//////	
//////};
//////
//////int main(){
//////	student k;
//////	fri f1;
//////	f1.display(k);
//////	return 0;
//////}
////
////
////#include <iostream>
////using namespace std;
////
////class base {
////	private:
////		int private_variable;
////		
////		
////	protected:
////	int protected_variable;
////	
////	public:
////		base()
////	{
////		private_variable=50;
////		protected_variable=90;
////	}
////	
////	friend void friendfunction(base&);
////};
////    void friendfunction(base& obj){
////		cout<<"private variable:"<<obj.private_variable<<endl;
////		cout<< "protected variable:"<<obj.protected_variable;
////		
////	}
////	
////	
////	int main()
////		{
////			base object1;
////			friendfunction(object1);
////			return 0;
////			
////		}
////		
////
////
////
////
////
////
////
////
////
////
////  
////  
////  
////  
////  
////  
////
//
//
//#include <iostream>
//using namespace std;
// 
//class base; // forward definition needed.... another class in which function is declared
//class anotherClass {
//public:
//    void memberFunction(base&);
//};
// 
//// base class for which friend is declared
//class base {
//private:
//    int private_variable;
// 
//protected:
//    int protected_variable;
// 
//public:
//    base()
//    {
//        private_variable = 10;
//        protected_variable = 99;
//    }
// 
//    // friend function declaration
//    friend void anotherClass::memberFunction(base&); // another class
//};
// 
//// friend function definition
//void anotherClass::memberFunction(base& obj)
//{
//    cout << "Private Variable: " << obj.private_variable
//         << endl;
//    cout << "Protected Variable: " << obj.protected_variable;
//}
// 
//// driver code
//int main()
//{
//    base object1;
//    anotherClass object2;
//    object2.memberFunction(object1);
// 
//    return 0;
//}







