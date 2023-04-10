//checking even no without modulo operator


#include<stdio.h>
int main(){
    int x;
    printf("Enter a no:");
    scanf("%d",&x);
    if(x&1)
        printf("odd no");
    else
        printf("even no");
        
       
return 0;
}