#include<iostream>
using namespace std;
main()
{
int number,sum=0,ans,digit;
cout<<"Enter a 4-digit number: ";
cin>>number;
digit = number%10;
sum+=digit;
number =number/10;
digit=number%10;
sum+=digit;
number=number/10;
digit = number%10;
sum+=digit;
number=number/10;
digit = number%10;
sum+=digit;
cout<<"Sum of the individual digits: "<<sum; 
}