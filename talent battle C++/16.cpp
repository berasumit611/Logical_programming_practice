#include<iostream>
using namespace std;
int main(){
int year;
cout<<"enter year:";
cin>>year;
((year%400==0)||((year%4==0) && !(year%100==0)))?cout<<"leap year":cout<<"mot leap year";
return 0;
}