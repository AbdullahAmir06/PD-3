#include<iostream>
using namespace std;
main()
{
int numberOfSquareMeters,width,height,numberOfWalls;
cout<<"Number of square meters you can paint: ";
cin>>numberOfSquareMeters;
cout<<"Width of the single wall (in meters): ";
cin>>width;
cout<<"Height of the single wall (in meters): ";
cin>>height;

numberOfWalls=numberOfSquareMeters/(width*height);
cout<<"Number of walls you can paint: "<<numberOfWalls;
}