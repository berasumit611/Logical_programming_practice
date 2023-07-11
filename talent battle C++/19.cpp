#include<iostream>
using namespace std;
int main(){
    int n,range;
 cout<<"enter a no";
 cin>>n;
 cout<<"enter a range";
 cin>>range;
for (int i = 0; i <=range; i++)
{
   cout<<n<<"*"<<i<<"="<<n*i<<endl;
}
return 0;
}