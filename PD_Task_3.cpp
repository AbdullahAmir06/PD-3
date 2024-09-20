#include<iostream>
using namespace std;
main()
{
float initialVelocity,finalVelocity,time,acc;
cout<<"Enter Initial Velocity (m/s): ";
cin>>initialVelocity;
cout<<"Enter Acceleration (m/s^2): ";
cin>>acc;
cout<<"Enter Time (s): ";
cin>>time;
finalVelocity=(acc*time)+initialVelocity;
cout<<"Final Velocity (m/s): "<<finalVelocity;
}