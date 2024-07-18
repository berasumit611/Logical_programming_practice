public class ZigZagNumber {
    public static int reverse(int n) {
        int rev =0;
        while (n!=0){
            int rem = n%10;
            rev =(rev*10)+rem;
            n = n/10;
        }
        return rev;
    }
    public static void main(String[] args) {
        int no1= 3415;
        int no2= 1435;
        int revNo1=reverse(no1);
        int res =0;
        while (revNo1>0 && no1>0){
            res= (res*100)+((revNo1 % 10)*10 + (no2 % 10));
            revNo1 = revNo1/10;
            no2 = no2/10;

        }
        System.out.println(res);
        System.out.println((res*10)+1);
    }
}