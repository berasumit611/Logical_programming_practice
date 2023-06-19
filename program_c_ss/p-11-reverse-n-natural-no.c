#include<stdio.h>
int main(){
    int n,i;
    printf("Enter no:");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        printf("%d\t",n+1-i);
    }
    
return 0;
}