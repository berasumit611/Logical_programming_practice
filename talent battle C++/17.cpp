#include<iostream>
using namespace std;
int main(){
    int num=6,fact=1;
    if(num<0) cout<<"not possilble";
    else{
        for(int i=num;i>=1;i--){
            fact=fact*i;
        }
    }
    cout<<"factorial"<<fact;
return 0;
}