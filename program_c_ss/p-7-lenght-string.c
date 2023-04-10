//length of string
//1.without predefined function-------
#include<stdio.h>
#include<string.h>
int main(){
    char s[20];
    int i,a;
    printf("Enter a string:");
    gets(s);
    for(i=0;s[i]!='\0';i++);
    printf("length of string:%d",i);
    a=strlen(s);
    printf("\nusing strlen %d",a);
return 0;
}
