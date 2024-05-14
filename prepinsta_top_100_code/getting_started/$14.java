//Check whether or Not the Number is an Armstrong Number in Java

import java.util.Scanner;

public class $14 {
    //function to get length of number
    static int length(int no)
    {
        int count=0;
        while(no!=0)
        {
            count++;
            no=no/10;
        }
        return count;
    }
    //function to check armstrong no
    static void isArmstrong(int no, int power)
    {
        int no_copy=no;
        int sum=0;
        while(no!=0){
            int rem=no%10;
            sum=sum+(int)Math.pow(rem, power);
            no=no/10;
        }
        if(sum==no_copy){
            System.out.println(no_copy+" is armstrong number");
        }else{
            System.out.println(no_copy+" is not armstrong number");
        }
    }
      public static void main(String[] args) {
            Scanner r=new Scanner(System.in);
            System.out.println("Enter a number: ");
            int x=r.nextInt();
            int power=length(x);
            isArmstrong(x,power);
            
        }
}
