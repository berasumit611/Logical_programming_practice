#include<stdio.h>
int main(){
    const float PI=3.14;
    int r;
    printf("enter radious of circle:");
    scanf("%d",&r);
    printf("\nArea of circle: %0.2f",(PI*r*r));
return 0;
}