//check vowel or consonent manually

#include<iostream>
using namespace std;
int main(){
    int islower_case_vowel,isUpper_case_vowel;
char c;
cout<<"enter alphabet";
cin>>c;

//evaluate 1 if alphabet =lower case vowel
islower_case_vowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');



isUpper_case_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
if(!isalpha(c)){
    cout<<"error non alphabatic character";
    
}
else{
(isUpper_case_vowel||islower_case_vowel==true)?cout<<"vowel":cout<<"consonent";
}

return 0;
}