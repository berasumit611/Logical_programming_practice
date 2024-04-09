import java.util.Scanner;

class One{
    public static void main(String[] args) {
        Scanner r =new Scanner(System.in);

        System.out.println("Enter a number: ");
        int x=r.nextInt();
        if(x==0){
            System.out.println("------Zero-----");
        }
        else{
            String y=(x>0)?"Positive":"Negative";
            System.out.println(y);
        }
    }
}