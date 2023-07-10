#include<iostream>
using namespace std;
int main(){

    int x,y;
    cout<<"enter two value";
    cin>>x>>y;
    cout<<"before swap x="<<x<<" and y="<<y;

    x=x+y;
    y=x-y;
    x=x-y;

    cout<<"x:"<<x<<"y:"<<y;

return 0;
}