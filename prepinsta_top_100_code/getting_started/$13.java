//Palindrome Program in Java [no==reverse no]
import java.util.*;
public class $13 {
    static void isPalindrome(int no)
    {
        int no_copy=no;
        int rev=0;
        while(no!=0)
        {
            int rem=no%10;
            rev=rev*10+rem;
            no=no/10;
        }
        if(rev==no_copy){
            System.out.println(no_copy+" is palindrome no");
        }else{
            System.out.println(no_copy+" is not palindrome no");
        }
    }
     public static void main(String[] args) {
           Scanner r=new Scanner(System.in);
           System.out.print("Enter a number: ");
           int x=r.nextInt();
           isPalindrome(x);

       }
}