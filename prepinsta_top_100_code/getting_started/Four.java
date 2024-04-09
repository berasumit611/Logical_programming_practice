//Find the Sum of N Natural Numbers in Java
import java.util.Scanner;
public class Four {
    public static void main(String[] args) {
        Scanner r=new Scanner(System.in);
        System.out.print("Enter range ==> ");
        int x=r.nextInt();
        int sum=0;
        for(int i=0;i<=x;i++){
            sum+=i;
        }
        System.out.println("Sum of "+x+" Natural no==> "+sum);
    }
}
