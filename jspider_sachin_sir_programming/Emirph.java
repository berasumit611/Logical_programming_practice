

import java.util.Scanner;

/*What is EmirphNumber?
=>if a no. is prime and reverse of that no. is also prime then it is called EmirphNumber.
eg:- 79 or 97
*/

public class Emirph {
    //check no. is prime or not
    public static boolean prime(int n) {

        for(int i = 2 ; i <= n/2; i++){
           if (n%i==0){
               return false;
           }
        }
        return true;
    }
    //reverse the no.
    public static int reverse(int n) {
        int sum =0;
        while (n!=0){
            int rem = n%10;
            sum =sum*10+rem;
            n = n/10;
        }
        return sum;
    }


    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        int n = sc.nextInt();

        //reverse the no.
        int rev = reverse(n);
        //heer we check  both no. and reverse no. is prime or not
        if(prime(n) && prime(rev)){
            System.out.println("It is Emirph");

        }else{
            System.out.println("It is not  Emirph");
        }
    }




}
