// Task

// You have to print the character, , in the first line. Then print  in next line. In the last line print the sentence, .
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int MAX_LEN=99;
    char ch, s[MAX_LEN], sen[MAX_LEN]; 
    scanf("%c\n", &ch); 
    scanf("%s\n", s); 
    scanf("%[^\n]%*c", sen); 
    printf("%c\n%s\n%s", ch, s, sen);
   
    return 0;
}
