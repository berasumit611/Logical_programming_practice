// Find the Reverse of a Number in Java
/*
Example
Input : 123
Output : 321 */
import java.util.*;
public class $12 {
    static void reverse(int no)
    {
        int no_copy=no;
        int rev=0;
        while(no!=0)
        {
            int rem=no%10;
            rev=rev*10+rem; 
            no=no/10;
        }
        System.out.println("Reverse of "+no_copy+" is: "+rev);
    }
    public static void main(String[] args) {
        Scanner r=new Scanner(System.in);
        System.out.print("Enter a number:");
        int x=r.nextInt();
        reverse(x);
    }
}
