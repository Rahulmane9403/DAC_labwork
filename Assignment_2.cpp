//1)WRITE A CPP PROGRAM TO SWAP 2 VARIABLES WITHOUT USING 3RD VARIABLE.
//#include<iostream>
//using namespace std;
//int main(){
//	int a = 20;
//	int b = 30;
//	cout<<"swap the value of two variable:"<<endl;
//	a = a*b;// 20*30=600
//	b = a/b;// 600/30= 20
//	a = a/b; // 600/20=30
//	cout<<"value of a:"<<a<<" value of b:"<<b<<endl;
//}


////2)WRITE A CPP PROGRAM TO CHECK WHETHER THE GIVEN NUMBER IS PALINDROM OR NOT.
//#include <iostream>  
//using namespace std;  
//int main()  
//{  
//  int a,b;
//  int sum=0;
//  int temp;    
//  cout<<"Enter the Number="<<endl;    
//  cin>>a;    
//  temp=a;
//  while(a>0){
//  b=a%10;    
//  sum=(sum*10)+b;    
//  a=a/10;    
// }    
// if(temp==sum){
// cout<<"Palindrome"<<endl;
// }else{
// cout<<"not Palindrome";
// }
//  return 0;  
//}  

//3) first 25 prime no
//#include<iostream>
//using namespace std;
//int main() {
//    int count = 0; 
//    int num = 2;   
//    cout<<"prime no are:"<<endl;
//    while (count < 25) {
//        bool isPrime = true;
//        for (int i = 2; i <= num / 2; i++) {
//            if (num % i == 0) {  
//                isPrime = false;
//                break;
//            }
//        }
//        if (isPrime) {
//          cout<<num<<" ";
//            count++;
//        }
//        num++;  
//    }
//   return 0;
//}


//4.fact of 5 to 8

//#include <iostream>
//using namespace std;
//int fact(int a){
//    if (a==1){
//        return 1;  
//    } else{
//        return a * fact(a-1);  
//    }
//}
//int main(){
//    for (int i=5;i<=8;i++) {
//        cout <<"factorial of "<<i<<" is "<<fact(i)<< endl;
//    }
//    return 0;
//}

//5.







//9)C++ Program to Reverse a Number
//
//#include<iostream> 
//using namespace std;
//int main(){
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	cout<<"Reverse a Number:"<<endl;
//	for(int i=9;i>=0;i--){
//		cout<<arr[i]<<endl;
//	}
//	return 0;
//}

#include <iostream>
using namespace std;
int no_of_digit(int num){
    int count = 0;
    if (num == 0) {
        return 1;
    }
    while (num != 0) {
        num = num/10; 
        count++;        
    }
    return count;
}
int main() {
    int no;
    cout<< "Enter a number: ";
    cin>>no;
    int digits = no_of_digit(no);
    cout<<"Number of digits: "<<digits<<endl;
    return 0;
}







