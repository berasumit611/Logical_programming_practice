//compute quotient and remainder
#include<iostream>
using namespace std;
int main(){
int divisor,divident,remainder,quotient;
cout<<"enter divisor\n";
cin>>divisor;
cout<<"enter divident\n";
cin>>divident;

quotient=divident/divisor;
remainder=divident%divisor;

cout<<"quotient:"<<quotient<<endl<<"remainder:"<<remainder;

return 0;
}