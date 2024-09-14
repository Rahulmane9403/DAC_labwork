//////#include<iostream>
//////using namespace std;
//////class student{
//////	private:
//////		int roll_no;
//////	public:
//////		//const
//////		student(){
//////			roll_no=10;
//////		}
//////	friend int printdetails(student);
//////};
//////int printdetails(student s1){
//////	s1.roll_no;
//////}
//////
//////int main(){
//////	student s1;
//////	cout<<printdetails(s1)<<endl;
//////	
//////}
////
////
////#include<iostream>
//////using namespace std;
////class B;
////class A{
////	int x;
////	public:
////		void set(int i){
////			x=i;
////		}
////	friend int freiend_Function(A,B);
////};
////
////class B{
////	int y;
////	public:
////		void set(int i){
////			y=i;
////		}
////	friend int freiend_Function(A,B);
////};
////
////int freiend_Function(A aobj,B bobj){
////	if(aobj.x < bobj.y){
////	std::cout<<"Y gre"<<std::endl;
////	}
////	else{
////		std::cout<<"X gre"<<std::endl;
////	}	
////}
////
////
////int main(){
////	A aobj;
////	B bobj;
////	aobj.set(10);
////	bobj.set(50);
////	freiend_Function(aobj,bobj);
////}
//
//#include<iostream>
//using namespace std;
//class B;
//class A{
//	public:
//		A(){
//		cout<<"In A constr"<<endl;
//		}		
//	private:
//		int c;
//		
//	friend int freiend_Function(A,B);
//};
//
//class B{
//	public:
//		B(){
//		cout<<"In B constr"<<endl;
//		}		
//	private:
//		int d;
//	friend int freiend_Function(A,B);
//};
//
//int freiend_Function(A aobj,B bobj){
//	return(aobj.c + bobj.d);
//}
//
//
//int main(){
//	A aobj;
//	B bobj;
//	cout<<"friend function"<<freiend_Function(aobj,bobj);
//	
//}

#include<iostream>
using namespace std;
class A{
	int a,b,c;
	public:
	A(int a,int b){
		this->a=a;
		this->b=b;	
	}
	friend void abc1(A &);
};

void abc1(A& s1){
	
	s1.c = s1.a;
	s1.a = s1.b;
	s1.b = s1.c;
	
	cout<<s1.a<<" "<<s1.b;
	
}

int main(){
	A a2(10,20);
    abc1(a2);
}


