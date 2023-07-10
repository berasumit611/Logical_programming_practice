#include<iostream>
using namespace std;
int main(){
    int x,y,temp=0;
    cout<<"enter two no:";
    cin>>x>>y;
    cout<<"before swap x="<<x<<" & y="<<y;
    temp=x;
    x=y;
    y=temp;
    cout<<"x:"<<x<<"y:"<<y;

return 0;
}