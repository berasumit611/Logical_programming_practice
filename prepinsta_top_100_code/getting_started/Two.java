import java.util.Scanner;

public class Two {
    public static void main(String[] args) {
        Scanner r=new Scanner(System.in);
        System.out.println("Enter a number:");
        int x=r.nextInt();

        String a=(x%2==0)?"Even":"Odd";
        System.out.println(a);
    }
}
