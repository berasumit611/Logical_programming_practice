//roots of quadratic euation
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c,discriminant,root1,root2,real,imaginary;

    cout<<"enter a b c respectively";
    cin>>a>>b>>c;

    discriminant=b*b-4*a*c;

    if(discriminant==0){

        root1=root2=-b/(2*a);
        cout<<"roo1 & roo2 are real and same:"<<root1;

    }else{
        if(discriminant>0){
            root1=(-b+sqrt(discriminant))/(2*a);
            root2=(-b-sqrt(discriminant))/(2*a);
            cout<<"roots are real but different\n";
            cout<<"root1"<<root1<<endl<<"root2"<<root2;
        }
        else{
            real=-b/(2*a);
            imaginary=sqrt(-discriminant)/(2*a);
            cout<<"roots are complex and different\n";
            cout<<"root1"<<real<<"+"<<imaginary<<"i"<<endl;
            cout<<"root1"<<real<<"-"<<imaginary<<"i"<<endl;

        }
    }

return 0;
}