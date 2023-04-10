#include<stdio.h>
#include<string.h>
void swap(char a, char b){
    char temp;
    temp=a;
    a=b;
    b=temp;

}
int main(){
    int i,l;
    char s[20];
    printf("enter a string:");
    gets(s);
    strrev(s);
    printf("%s\n",s);
    for(l=0;s[l]!=0;l++);
    for ( i = 0; i < l/2; i++)
    {
        swap(s[i],s[l-1-i]);
    }
    
    printf("without strrev fn :%s",s);
return 0;
}