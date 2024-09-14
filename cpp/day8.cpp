////#include<iostream> 
////
////using namespace std; 
////#include<stdlib.h> 
//// class Test 
////{ 
////public: 
////   Test() 
////   { cout << "Constructor called"; } 
////}; 
//// int main() 
////{ 
////    Test *t = (Test *) malloc(sizeof(Test)); 
////    return 0; 
////}
//
//
//
//
//#include <iostream>
////#include<string.h>
////using namespace std;
////int ustrlen(char*);
////int main()
////{
////	char ch[10];
////	cout<<"enter string:"<<endl;
////	cin>>ch;
////	int len=ustrlen(ch);
////	cout<<"length of string:"<<len<<endl;
////}
////
////
////int ustrlen(char* ch1){
////	int len=0;
////	while(*ch1 !='\0'){
////		len++;
////		ch1++;
////	}
////	return len;
////	
////}\
//
//
//#include<string.h>
//using namespace std;
//int ustcpy(char*,char*);
//int main()
//{
//	char ch[15],ch1[15];
//	cout<<"enter string:"<<endl;
//	cin>>ch;
//	ustcpy(ch1,ch);
//	
//
//}
//
//
//int ustcpy(char* s1,char* s2){
//	while(*s2 !='\0')
//	{
//		
//		*s1=*s2;
//		s1++;
//		s2++;
//	}
//	*s1='\0'
//	return ch1;
//	
//}


#include<iostream>
#include<string.h>
using namespace std;
void ustrcat(char*,char*);

int main(){
	char ch[10],ch1[10];
	cout<<"enter 1 string:"<<endl;
	cin>>ch;
	cout<<"enter 2 string:"<<endl;
	cin>>ch1;
	ustrcat(ch,ch1);
	cout<<"strcat:"<<ch;
}

void ustrcat(char *ch2,char *ch3){
	while(ch2 !='\0'){
		ch2++;
	}
	while(ch3 !='\0'){
		*ch2 = *ch3;
		ch2++;
		ch3++;
	}
	*ch2='\0';
}
