/*HappyNumber:- 1) split the number into single sigits
               2) Do sum of square of each digit until it reaches in single digit
               3) check if it is 1(happy) or not(sad)*/

               public class HappyNumber {
                static int happyNumber(int n){
            
                    if (n>=10) {
                        int sum = 0;
            
                        while (n != 0) {
                            int rem = n % 10;
                            int square = rem*rem;
                            sum += square;
                            n = n / 10;
                        }
            
                        return happyNumber(sum);
                    }
            
            
                    return n;
                }
                public static void main(String[] args) {
                    int res = happyNumber(63);
                    if(res==1)
                        System.out.println("It is happy number.");
                    else
                        System.out.println("it is not happy number.");
            
                }
            
            }
    