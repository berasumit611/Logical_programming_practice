#include <stdio.h>
void insertion(int A[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        j = i - 1;
        temp = A[i];
        while (j > -1 && A[j] > temp)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = temp;
    }
}

int main()
{
    int A[] = {3, 7, 2, 8, 5, 6, 8, 15}, n = 8, i;
    insertion(A, 8);
    for (i = 0; i < 8; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}