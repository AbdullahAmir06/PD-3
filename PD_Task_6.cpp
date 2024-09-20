#include<iostream>
using namespace std;
main()
{
int sizeOfFertilizer,costOfBag,area,costOfFertilizerPerPound,costOfFertilizingPerSquareFoot;
cout<<"Enter the size of the fertilizer bag in pounds: ";
cin>>sizeOfFertilizer;
cout<<"Enter the cost of the bag: $";
cin>>costOfBag;
cout<<"Enter the area in square feet that can be covered by the bag: ";
cin>>area;
costOfFertilizerPerPound=costOfBag/sizeOfFertilizer;
costOfFertilizingPerSquareFoot=costOfBag/area;
cout<<"Cost of fertilizer per pound: $"<<costOfFertilizerPerPound <<endl;
cout<<"Cost of fertilizing per square foot: $"<<costOfFertilizingPerSquareFoot;
}