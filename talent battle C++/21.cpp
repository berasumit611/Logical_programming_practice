#include<iostream>
using namespace std;
 

int main(){
    int n,t1=0,t2=1,next_term=0;

    cout<<"genenerate fibonacci series upto a certain no, enter the nth no:";
    cin>>n;

    cout<<"fibonacci series";
    while(next_term<=n){
        cout<<next_term<<",";
        t1=t2;
        t2=next_term;
        next_term=t1+t2;
        
    }
   

return 0;
}