package java_project;

import java.util.Scanner;
public class ArrayService {
	public static void AcceptData(int[] arr) {
		Scanner sc= new Scanner(System.in);
		for(int i=0;i<arr.length;i++) {
			System.out.println("enter no:");
			arr[i] = sc.nextInt();
		}
	}
	public static void DisplayData(int[] arr) {
		for(int i=0;i<arr.length;i++) {
			System.out.println(i + " :" +arr[i]);
			
		}
	}
	public static int SearchData(int[] arr,int s) {
		for(int i=0;i<arr.length;i++) {
			if(arr[i]==s)
				return i;
			
		}
		return -1;
}
	public static int AddAllEven(int[] arr) {
		int sum=0;
		for(int n:arr) {
			if(n%2==0) 
				sum = sum + n;	
		}
		return sum;
		
	}
	private static boolean checkprime(int num) {
		for(int i=2;i<num;i++) {
			if(num%i==0) {
				return false;
			}
		}
		return true;
	}
	public static int[] findAllPrimeNumbers(int[] arr) {
		int[] primearr=new int[arr.length];
		int cnt=0;
		for(int n:arr) {
			boolean ans=checkprime(n);
			if(ans) {
				primearr[cnt]=n;
				cnt++;
			}
		}
		if(cnt>0) {
			return primearr;
		}
		return null;
	}
}
