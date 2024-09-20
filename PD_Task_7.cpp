#include<iostream>
using namespace std;
main()
{
string name;
int adultTicketPrice,childTicketPrice,adultSold,childSold,per,total,donated,remaining;
cout<<"Enter the movie name: ";
cin>>name;
cout<<"Enter the adult ticket price: $";
cin>>adultTicketPrice;
cout<<"Enter the child ticket price: $";
cin>>childTicketPrice;
cout<<"Enter the number of adult tickets sold: ";
cin>>adultSold;
cout<<"Enter the number of child tickets sold: ";
cin>>childSold;
cout<<"Enter the percentage of the amount to be donated to charity: ";
cin>>per;

total=(adultTicketPrice*adultSold)+(childTicketPrice*childSold);
donated=(total*per)/100;
remaining=total-donated;

cout<<"\nMovie: "<<name <<endl;
cout<<"Total amount generated from ticket sales: $"<<total <<endl;
cout<<"Donated to charity ("<<per<<"%) : $"<<donated <<endl;
cout<<"Remaining amount after donation: $"<<remaining;
}