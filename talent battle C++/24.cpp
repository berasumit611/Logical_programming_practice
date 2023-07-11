#include<iostream>
using namespace std;
int main(){

    int x,y,lcm,max;
    cout<<"enter two vlaue";
    cin>>x>>y;

max=(x>y)?x:y;
for (int i= max; i <= x*y; i++)
{
   if(i%x==0 && i%y==0){
    lcm=i;
    break;
   }
}
   cout<<"lcm of"<<x<<" & "<<y<<"is:"<<lcm;

return 0;
}