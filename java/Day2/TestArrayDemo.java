package java_project;

import java.util.Scanner;
public class TestArrayDemo {
		private static final int[] Null = null;

		public static void main(String[] args) {
			int[] arr = new int[10];
			ArrayService.AcceptData(arr);
			ArrayService.DisplayData(arr);
			Scanner sc= new Scanner(System.in);
			System.out.println("enter no:");
			int search = sc.nextInt();
			int pos = ArrayService.SearchData(arr,search);
			if(pos!=-1) {
			    	System.out.println("number found");
			    }else {
			    	System.out.println("number not found");
			    }
			int sum =ArrayService.AddAllEven(arr);
			System.out.println(+sum);
			int primearr[] = ArrayService.findAllPrimeNumbers(arr);
			
			if(primearr!=Null) {
				
				for(int n:primearr){
					System.out.println(primearr);
				}
			}else {
				System.out.println("not a prime");
			}
			sc.close();
		}
		
}
