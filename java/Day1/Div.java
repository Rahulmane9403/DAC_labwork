//Write a program to accept 10 numbers from user and find sum of all numbers which are eith divisible 
//by 5 or 3 or 11

import java.util.Scanner;
class Div{
public static void main(String[] args){
Scanner sc = new Scanner(System.in);
System.out.println("enter a no: ");
int sum = 0;
for(int i=0;i<10;i++){
	int n = sc.nextInt();
if((n%5==0) || (n%3==0) || (n%11==0)){
	sum = sum + n;
}           
}
System.out.println("sum is :" +sum);
sc.close();
}


}