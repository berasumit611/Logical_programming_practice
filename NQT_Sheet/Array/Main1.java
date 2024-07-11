// Find the smallest element in an array
// Example 1:
// Input: arr[] = {2,5,1,3,0};
// Output: 0
// Explanation: 0 is the smallest element in the array. 

// Example2: 
// Input: arr[] = {8,10,5,7,9};
// Output: 5
// Explanation: 5 is the smallest element in the array.

import java.util.*;
public class Main1 {
 
  public static void main(String args[]) {
 
    int arr1[] =  {2,5,1,3,0};
    System.out.println("The smallest element in array is: " + sort(arr1));
   
    int arr2[] =  {8,10,5,7,9};
    System.out.println("The smallest element in array is: " + sort(arr2));
  }
  static int sort(int arr[]) {
    Arrays.sort(arr);
    return arr[0];
    
  }
}