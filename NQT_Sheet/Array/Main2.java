//Find the Largest element in an array
// Approach: 
// Sort the array in ascending order.
// Print the (size of the array -1)th index.
package NQT_Sheet.Array;

import java.util.Arrays;

public class Main2 {
 public static void main(String[] args) {
    int arr1[] =  {2,5,1,3,0};
    System.out.println("The Largest element in the array is: " + sort(arr1));
 }   
 static int sort(int arr[]) {
    Arrays.sort(arr);
    return arr[arr.length - 1];
  }
}
