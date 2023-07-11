#include<iostream>
using namespace std;
int main(){

    int base,exponent,result=1;
    cout<<"enter base and exponent value:";
    cin>>base>>exponent;

    cout<<base<<"^"<<exponent<<endl;
    while(exponent!=0){
        result*=base;
        exponent--;
    }
    cout<<result;
return 0;
}