#include<stdio.h>
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\nafter swap--a:%d,b:%d",a,b);
}
int main(){
    int a,b;
    printf("enter two no:");
    scanf("%d %d",&a,&b);
    printf("\nbefore swap a:%d,b:%d",a,b);
    swap(a,b);
}