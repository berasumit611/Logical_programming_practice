#include<iostream>
using namespace std;
int main(){
int x=3,y=15,z=10;
if(x>=y && x>=z) cout<<"highest"<<x;
else if(y>=x && y>=z) cout<<"highest"<<y;
else cout<< z<<"is highest";
return 0;
}