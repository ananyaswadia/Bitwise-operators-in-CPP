#include<iostream>
using namespace std;

int main (){
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"a AND b: "<<(a&b)<<endl;
    cout<<"a OR b: "<<(a|b)<<endl;
    cout<<"a XOR b: "<<(a^b)<<endl;
    cout<<"NOT b: "<<(~b)<<endl;
    cout<<"NOT a: "<<(~a)<<endl;
    cout<<"LEFT SHIFT a: "<<(a<<1)<<endl;
    cout<<"RIGHT SHIFT b: "<<(b>>1)<<endl;

    return 0;
}