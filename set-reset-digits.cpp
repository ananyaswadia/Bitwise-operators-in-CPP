//Ananya Swadia
//24070123012

#include<iostream>
using namespace std;

int main(){
    //set using or and left/right shift (1<<n)
    //reset using and and left/right shift (1<<n) and NOT
    //indexing is 0,1,2...
    int num,set,reset;
    int bit_set,bit_reset;
    cout<<"Enter a number: ";
    cin>>num;
   
    cout<<"Enter the bit position you want to reset: ";
    cin>>bit_set;
    set=num | (1<<bit_set);
    cout<<"Your number is:"<<set<<endl;
   
    cout<<"Enter bit position you want to reset: ";
    cin>>bit_reset;
    reset= num & (~(1<<bit_reset));
    cout<<"Your number after resetting is: "<<reset<<endl;
   
    return 0;
} 


/*   OUTPUT
Enter a number: 78
Enter the bit position you want to reset: 5
Your number is:110
Enter bit position you want to reset: 4
Your number after resetting is: 78
*/
