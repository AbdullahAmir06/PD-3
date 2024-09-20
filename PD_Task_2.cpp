#include<iostream>
using namespace std;
main()
{
int numberOfMin,framePerMin,totalFrame;
cout<<"Number of Minutes: ";
cin>>numberOfMin;
cout<<"Frames per Second: ";
cin>>framePerMin;
totalFrame=numberOfMin*framePerMin*60;
cout<<"Total Number of Frames: "<<totalFrame;
 }