#include<iostream>
using namespace std;
main ()
{
string name;
float weightLoss,days;
cout<<"Enter the Name of Person: ";
cin>>name;
cout<<"Enter the target weight loss in Kilograms: ";
cin>>weightLoss;
days=weightLoss*15;
cout<<name<<" will need "<<days<<" days to lose "<<weightLoss<<"kg of weight by following the doctor's suggestions.";
}
