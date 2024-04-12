import java.util.Scanner;

class Seven {
    public static void main(String[] args) {
        Scanner r=new Scanner(System.in);
        System.out.println("Enter three number=>");
        int a=r.nextInt();
        int b=r.nextInt();
        int c=r.nextInt();
        int temp=(a>b)?a:b;
        int res=(temp>c)?temp:c;
        System.out.println("Greatest no=> "+res);
    }
}
