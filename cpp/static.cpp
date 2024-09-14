////////#include<iostream>
////////#include<string.h>
////////using namespace std;
////////class abc{
////////	public:
////////		int accno;
////////		char Name[20];
////////		static float rateofinterst;
////////		abc(int accno,char* Name){
////////			this->accno= accno;
////////			strcpy(this->Name,Name);
////////		}
////////		void dis(){
////////			cout<<"details:"<<accno<<" "<<Name<<" ";
////////		}
////////};
////////
////////float abc::rateofinterst=7.5;
////////
////////
////////int main(){
////////	abc a1 =abc(101,"RAM");
////////	abc a2 =abc(102,"sai"); 
////////	a1.dis();
////////	a2.dis();
////////	
////////}
//////
//////
//////#include<iostream>
//////#include<string.h>
//////using namespace std;
//////class abc{
//////	private:
//////		static float rateofinterst;
//////		static char Name;
//////	public:
//////		int accno;
////////		char Name[20];
//////		abc(int accno){
//////			this->accno= accno;
////////			strcpy(this->Name,Name);
//////		}
//////		void dis(){
//////			cout<<"details:"<<accno<<" "<<Name<<" ";
//////		}
//////};
//////
//////float abc::rateofinterst=7.5;
////////char abc::Name="omsai"
//////
//////int main(){
////////	abc a1 =abc(101,"RAM");
////////	abc a2 =abc(102,"sai"); 
//////    cout<<"no of obj created is   "<<abc::rateofinterst();
//////	cout<<abc::*Name;
////////	a1.dis();
////////	a2.dis();
////////	
//////}
////
////#include <iostream>
////using namespace std;
////
////class Test
////{
////	static int x;
////public:
////	Test() { x++; }
////	static int getX() {return x;}
////};
////int Test::x;
////int main()
////{
////	cout << Test::getX() << " ";
////}
//
//#include <iostream>
//using namespace std;
// 
//class Player
//{
//private:
//    int id;
//    static int next_id;
//public:
//    int getID() { 
//	return id; // 1 2 3
//	}
//    Player()  {  
//	id = next_id++; // 
//	}
//};
//int Player::next_id = 1; // declare static var as 1 //global decl
// 
//int main()
//{
//  Player p1;
//  Player p2;
//  Player p3;
//  cout << p1.getID() << " ";
//  cout << p2.getID() << " ";
//  cout << p3.getID();
//  return 0;
//}

//#include<iostream>
//class Test {      
//   static void fun() const 
//   { // compiler error
//     return;
//   }
//};
//  int main()
//{
//   
//}
