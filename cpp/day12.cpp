////////#include<iostream>
////////#include<string.h>
////////using namespace std;
////////void ustrcat(char*,char*);
////////
////////int main(){
////////	char ch[10],ch1[10];
////////	cout<<"enter 1 string:"<<endl;
////////	cin>>ch;
////////	cout<<"enter 2 string:"<<endl;
////////	cin>>ch1;
////////	ustrcat(ch,ch1);
////////	cout<<"strcat:"<<ch;
////////}
////////
////////void ustrcat(char *ch2,char *ch3){
////////	while(ch2 !='\0'){
////////		ch2++;
////////	}
////////	while(ch3 !='\0'){
////////		*ch2 = *ch3;
////////		ch2++;
////////		ch3++;
////////	}
////////	*ch2='\0';
////////}
//////
//////
//////
////////#include <iostream>
////////using namespace std;
////////template<class T> 
////////T add(T &a,T &b)  
////////{  
////////    T result = a+b;  
////////    return result;  
////////      
////////}  
////////int main(){
////////	
////////	int i=5;
////////	int j=6;
////////	
////////	float m=7.7;
////////	float n=5.6;
////////	cout<<"Addition of iand is"<<add(i,j);
////////	
////////}
//////
//////
////////#include <iostream>
////////using namespace std;
////////template <class T>
////////
////////	T myMax(T x, T y) //3 7 
////////{
////////    return (x > y) ? x : y;
////////}
////// 
////////int main()
////////{
////////    // Call myMax for int
////////    cout << myMax<int>(3, 7) << endl;
////////    // call myMax for double
////////    cout << myMax<double>(3.0, 7.0) << endl;
////////    // call myMax for char
////////    cout << myMax<char>('g', 'e') << endl;
//////// 
////////    return 0;
////////
////////}
////////
////////#include<iostream>
////////using namespace std;
////////template <class x,class y>
////////void f1(x a,y b){
////////	cout<<"value are:"<<a<<endl;
////////	cout<<"value are:"<<b<<endl;
////////	cout<<sizeof(a)<<endl;
////////	cout<<sizeof(b);
////////}
////////int main(){
////////	f1(10.5,156);
////////	return 0;
////////}
//////
////////Overloading a Function Template
//////#include<iostream>
//////using namespace std;
//////template <class x>
//////void d2(x a){
//////	cout<<"value in base function are:"<<a<<endl;
//////	
//////}
//////template <class y,class z>
//////void d2(y b,z c){
//////	cout<<"value in sec2 function are:"<<b<<endl;
//////	cout<<"value in sec2 function are:"<<c<<endl;
//////}
//////int main(){
//////	d2(10.8);
//////	d2(18,19);
//////	
//////}
////
//////template<class Ttype>  
//////class class_name  
//////{  
//////  .  
//////  .  
//////}  class_name<type> ob;  
////
//////class template
////#include<iostream>
////using namespace std;
////template <class T>
////class student{
////	public:
////		T  a=10;
////		T  b=18;
//////		int c;
////	    void add(){
//////	    	c= a+b;
////	    	cout<<"addition of"<<a+b<<endl;
////		}
////	
////};
////int main(){
////	student<int> s1;
////	s1.add();
////}
//
////CLASS TEMPLATE WITH MULTIPLE PARAMETERS
////Syntax
////template<class T1, class T2, ......>   
////class class_name  
////{  
////   // Body of the class.  
////}
//
////#include<iostream>
////using namespace std;
////template <class T1,class T2>
////class demo{
////	public:
////		T1 num1;
////		T2 num2;
////		
////		demo(T1 a, T2 b){
////			
////			num1=a;
////			num2=b;	
////		}
////		void function_1(){
////			cout<<"addition:"<<num1+num2<<endl;
////		}
////};
////
////int main(){
////	demo <int,float> d1(5,5.5);
////	d1.function_1();
////}
////
////
////
////
//
//#include <iostream>  
//     using namespace std;  
//     template<class T>
//    class A   
//    {  
//	public:
//         T a, b;  
//         public:  
//        void display(T,T);
//};
//  template<class T>
//
//          void A<T>:: display(T a ,T b)  
//          {  
//                 std::cout << "Values of a and b are : " << a<<" ,"<<b<<std::endl;  
//           }  
//   
//  
//      int main()  
//     {  
//           A<int> d;  
//           d.display(5,6);  
//           return 0;  
//     } 

