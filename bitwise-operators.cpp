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


/*   OUTPUT
Enter first number: 67
Enter second number: 89
a AND b: 65
a OR b: 91
a XOR b: 26
NOT b: -90
NOT a: -68
LEFT SHIFT a: 134
RIGHT SHIFT b: 44
*/
