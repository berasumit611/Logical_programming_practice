//Java Program to Check Whether a Number is Even or Odd
import java.util.Scanner;

public class $2 {
    public static void main(String[] args) {
        Scanner r=new Scanner(System.in);
        System.out.print("Enter a number:");
        int x=r.nextInt();

        String a=(x%2==0)?"Even":"Odd";
        System.out.println(a);
    }
}
