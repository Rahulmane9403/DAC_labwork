//#include<iostream>
//#include<string.h>
//using namespace std;
//void ustrcat(char*,char*);
//
//int main(){
//	char ch[10],ch1[10];
//	cout<<"enter 1 string:"<<endl;
//	cin>>ch;
//	cout<<"enter 2 string:"<<endl;
//	cin>>ch1;
//	ustrcat(ch,ch1);
//	cout<<"strcat:"<<ch;
//}
//
//void ustrcat(char *ch2,char *ch3){
//	while(ch2 !='\0'){
//		ch2++;
//	}
//	while(ch3 !='\0'){
//		*ch2 = *ch3;
//		ch2++;
//		ch3++;
//	}
//	*ch2='\0';
//}



#include <iostream>
using namespace std;
template<class T> 
T add(T &a,T &b)  
{  
    T result = a+b;  
    return result;  
      
}  
int main(){
	
	int i=5;
	int j=6;
	
	float m=7.7;
	float n=5.6;
	cout<<"Addition of iand is"<<add(i,j);
	
}


//#include <iostream>
//using namespace std;
//template <class T>
//
//	T myMax(T x, T y) //3 7 
//{
//    return (x > y) ? x : y;
//}
 
//int main()
//{
//    // Call myMax for int
//    cout << myMax<int>(3, 7) << endl;
//    // call myMax for double
//    cout << myMax<double>(3.0, 7.0) << endl;
//    // call myMax for char
//    cout << myMax<char>('g', 'e') << endl;
// 
//    return 0;
//
//}
