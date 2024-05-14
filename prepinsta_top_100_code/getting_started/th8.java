//Check Whether or Not the Year is a Leap Year in Java
import java.util.Scanner;
class th8 {
    public static void main(String[] args){
        Scanner r=new Scanner(System.in);
        System.out.print("Enter year: ");
        int year=r.nextInt();
        if(year%400==0){
            System.out.println(year+" is Leap year");
        }
        else if(year%100!=0 && year%4==0){
            System.out.println(year+" is Leap year");
        }
        else{
            System.out.println("Not a leap year");
        }
    }
}
