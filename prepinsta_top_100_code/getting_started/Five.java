import java.util.Scanner;
public class Five {

    public static void main(String[] args) {
        Scanner r=new Scanner(System.in);
        System.out.print("Enter starting number1 => ");
        int a=r.nextInt();
        System.out.print("Enter starting number2 => ");
        int b=r.nextInt();
        int sum=0;
        for(int i=a;i<=b;i++){
            sum+=i;
                }
            System.out.println("Sum ==> "+sum);
    }
   


}
