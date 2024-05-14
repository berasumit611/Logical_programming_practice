// Check if a Given Number is Positive or Negative in Java

import java.util.Scanner;
class $1{
    public static void main(String[] args) {
        Scanner r =new Scanner(System.in);

        System.out.print("Enter a number: ");
        int x=r.nextInt();
        if(x==0){
            System.out.println("Zero");
        }
        else{
            String y=(x>0)?"Positive":"Negative";
            System.out.println(y);
        }
    }
}