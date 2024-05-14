//Sum of digits of a Number in Java
/*
Input : 1234
Output : 1 + 2 + 3 + 4 = 10 
*/
import java.util.*;
public class $11 {
    static void ope(int no)
    {
        int sum=0;
        while(no!=0){
            int rem=no%10;
            sum=sum+rem;
            no=no/10;
        }
        System.out.println("Sum of digits of "+no+" is: "+sum);
    }
    public static void main(String[] args) {
        Scanner r=new Scanner(System.in);
        System.out.print("Enter a Number:");
        int x=r.nextInt();
        ope(x);
    }
}
