//Java Program to print Prime numbers in a given range
/*
Example
Input : 2 10
Output : 2 3 5  */
import java.util.*;
public class $10 {
    static boolean isPrime(int no)
    {
        int count=0;
        for(int i=1;i<=no;i++)
        {
            if(no%i==0)
            {
                count++;
            }
        }
        if(count==2){
            return true;
        }
        else{
            return false;
        }
    }
    public static void main(String[] args) {
        Scanner r=new Scanner(System.in);
        System.out.println("Enter starting range: ");
        int start=r.nextInt();
        System.out.println("Enter ending range: ");
        int end=r.nextInt();

        System.out.println("Prime no are in given range:");
        for(int i=start;i<=end;i++){
            if(isPrime(i)){
                System.out.print(i + " ");
            }
        }

    }
    
}
