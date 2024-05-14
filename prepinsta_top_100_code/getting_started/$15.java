// * Find the Armstrong Numbers in a given Interval in Java
/*
 Example 
 Input : 10 1000
 Output : 153  370  371  407
 */
import java.util.Scanner;

public class $15 {
    static int length(int no){
        int count=0;
        while(no!=0){
            count++;
            no=no/10;
        }
        return count;
    }
    static boolean isArmstrong(int no,int power)
    {
        int no_copy=no;
        int sum=0;
        while(no!=0)
        {
            int rem=no%10;
            sum=sum+(int)Math.pow(rem, power);
            no=no/10;
        }
        if(no_copy==sum)
        {
            return true;
        }else{
            return false;
        }
    }
  public static void main(String[] args) {
        Scanner r=new Scanner(System.in);
        System.out.print("Enter starting value of interval: ");
        int st=r.nextInt();
        System.out.print("Enter ending value of interval: ");
        int end=r.nextInt();
        for(int i=st;i<=end;i++)
        {
            int power=length(i);
            if(isArmstrong(i,power))
            {
                System.out.println(i);
            }
        }

    }
    
}
