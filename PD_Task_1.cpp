#include<iostream>
using namespace std;
main()
{
int sides,answer;
cout<<"Enter the number of sides of polygon: ";
cin>>sides;
answer=(sides-2)*180;
cout<<"The sum of internal angles of a "<<sides <<"-sided polygon is: "<<answer<<" degrees";
}