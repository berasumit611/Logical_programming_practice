import java.util.Scanner;
class Six{
    public static void main(String[] args){
        Scanner r=new Scanner(System.in);
        System.out.print("Enter a number=>");
        int x=r.nextInt();
        System.out.print("Enter another number=>");
        int y=r.nextInt();
        int c=(x>y)?x:y;
        System.out.print("greatest of 2 number is "+c);
    }
}