import java.util.Scanner;
class AddNumber{
public static void main(String[] args){
System.out.println("Add number");
Scanner sc=new Scanner(System.in);

int sum=0;
for(int i=0; i<5;i++){
int n=sc.nextInt();

sum=sum+n;
}
System.out.println("sum" +sum);
sc.close();
}
}