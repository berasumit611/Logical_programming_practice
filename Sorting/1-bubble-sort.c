#include<stdio.h>
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void bubble(int A[],int n)
{
    int i,j,flag=0;
    for(i=0;i<n-1;i++){
        flag=0;
        for(j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                swap(&A[j],&A[j+1]);
                flag=1;
            }
        }
        if(flag==0) //if flag is still 0 list is already sorted
        break;        
    }
}
int main(){
    int A[]={3,7,2,8,5,6,8,15},n=8,i;
    bubble(A,8);
    for(i=0;i<8;i++){
        printf("%d ",A[i]);
    }
return 0;
}