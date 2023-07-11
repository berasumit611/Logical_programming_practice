#include<iostream>
using namespace std;
int main(){

    int x,y,hcf;
    cout<<"enter two value";
    cin>>x>>y;

    for (int i = 1; i <=x || i<=y; i++)
    {
        if(x%i==0 && y%i==0)
            hcf=i;
    }
    
    cout<<hcf;

return 0;
}