#include<stdio.h>
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}

void selection(int A[],int n)
{
    int i,j,min_idx;
    for(i=0;i<n-1;i++){ //for pass counting 5--0,1,2,3
        min_idx=i;
        for(j=i+1;j<n;j++){//travarsing
            if(A[j]<A[min_idx])
                min_idx=j;
        }  
        if(min_idx !=i)
            swap(&A[i],&A[min_idx]);
    }
}

int main(){
    int A[]={3,7,2,8,5,8,0,1,89},n=9,i;
    selection(A,9);
    for(i=0;i<9;i++){
        printf("%d ",A[i]);
    }
return 0;
}