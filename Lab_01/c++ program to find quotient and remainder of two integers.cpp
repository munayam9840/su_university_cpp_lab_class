#include<iostream>
using namespace std;
int main()
{
    int divisor, divident, quotient, reminder;
    cout<<"Enter Divident: \n";
    cin>>divident;
    cout<<"Enter Divisor: \n";
    cin>>divisor;
    quotient=divident/divisor;
    reminder=divident%divisor;
    cout<<"Quotient= "<<quotient<<endl;
    cout<<"Reminder= "<<reminder<<endl;
}
