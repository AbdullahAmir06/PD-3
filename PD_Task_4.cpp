#include<iostream>
using namespace std;
main()
{
float impCount,playerCount;
int chance;
cout<<"Enter Imposter Count: ";
cin>>impCount;
cout<<"Enter Player Count: ";
cin>>playerCount;
chance=100*(impCount/playerCount);
cout<<"Chance of being an imposter: "<<chance <<"%";
}