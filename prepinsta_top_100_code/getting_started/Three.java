// Program to Find the Sum of First N Natural Numbers using java

import java.util.Scanner;
public class Three {
    public static void main(String[] args) {
        Scanner r=new Scanner(System.in);
        System.out.println("Enter range ==>");
        int x=r.nextInt();
        int sum=0;
        for(int i=1;i<=x;i++){
            sum+=i;
        }
        System.out.println("Sum of First "+x+" Natural Numbers: " +sum);

    }
}
