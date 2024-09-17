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

//5)WRITE A CPP PROGRAM TO DISPLAY SUMMATION OF  EVEN AND ODD NUMBERS IN AN ARRAY OF INTEGERS
/*#include<iostream>
using namespace std;
int main()
{
	int size;
	int esum,osum;
	cout<<"Enter the size of an array "<<endl;
	cin>>size;
	int*arr=new int[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<size;i++)
	{
		if (arr[i]%2==0)
		{
			esum+=arr[i];
		}
		else
		{
			osum+=arr[i];
		}
	}
	cout<<"The sum of even numbers are "<<esum<<endl;
	cout<<"The sum of odd numbers are "<<osum<<endl;
	return 0;
}*/
 
//6)WRITE A CPP PROGRAM TO CHANGE THE CASE OF EACH CHARACTER IN A GIVEN STRING.
/*
#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string str;
    cout << "Enter a string: "<<endl;
    getline(cin, str);
    for (int i = 0; i < str.length(); ++i) 
	{
        char &a = str[i];
      
        if (islower(a)) 
		{
            a = toupper(a); 
        } else if (isupper(a)) 
		{
            a = tolower(a); 
        }
    }
    cout << "String with case changed: " << str << endl;

    return 0;
}*/

//7)Write a template function swap () to swap the variables of int, char and complex type
/*
#include <iostream>
using namespace std;

template <typename R>
void Swap(R &a, R &b) {
    R temp = a;
    a = b;
    b = temp;
}

int main() {

    int x = 10, y = 20;
    cout << "Before swapping int: x = " << x << " y = " << y << endl;
    Swap(x,y);
    cout << "After swapping int: x = " << x << " y = " << y << endl;

    char a = 'A', b = 'B';
    cout << "Before swapping char: a = " << a << " b = " << b << endl;
    Swap(a,b);
    cout << "After swapping char: a = " << a << " b = " << b << endl;
    return 0;
}

*/








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

//8.find no of digits in the given no
//#include <iostream>
//using namespace std;
//int no_of_digit(int num){
//    int count = 0;
//    if (num == 0) {
//        return 1;
//    }
//    while (num != 0) {
//        num = num/10; 
//        count++;        
//    }
//    return count;
//}
//int main() {
//    int no;
//    cout<< "Enter a number: ";
//    cin>>no;
//    int digits = no_of_digit(no);
//    cout<<"Number of digits: "<<digits<<endl;
//    return 0;
//}
//


//10)C++ Program to remove all special characters from a given string.
//#include<iostream>
//#include<cstring>
//using namespace std;
//int main(){
//	char str[10];
//	int res[10];
//	int j;
//	cout<<"enter a string:";
//	cin.getline(str,100);
//	  for (int i = 0; i < strlen(str); i++){
//	  }
// if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
//	
//	res[j++]=str[i];
//}
//res[j] = '\0';
//	cout<<"the string after removal of special char is "<<res;
//	return 0;
//}






