//Find Second Smallest and Second Largest Element in an array
// Approach:
// Sort the array in ascending order
// The element present at the second index is the second smallest element
// The element present at the second index from the end is the second largest element
package NQT_Sheet.Array;

import java.util.Arrays;

public class Main3 {
    static  void sortarr(int arr [],int n)
{
    Arrays.sort(arr);
    int small = arr[1];
	int large = arr[n - 2];
	System.out.println("Second smallest is "+small);
	System.out.println("Second largest is "+large);
}
    public static void main(String[] args) {
        int[] arr = {1, 2, 4, 6, 7, 5};
        int n=arr.length;
        sortarr(arr,n); 
    }
    
}
