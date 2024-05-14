//Check Whether a Given Number is Prime or Not in Java
import java.util.*;
public class $9 {
    static void isPrime(int no)
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
            System.out.println(no+" is prime no");
        }else{
            System.out.println(no+" is not prime no");
        }
    }
    public static void main(String[] args) {
        Scanner r=new Scanner(System.in);

        System.out.println("Enter a number:");
        int x=r.nextInt();
        isPrime(x);
        
    }
}
