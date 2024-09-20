#include<iostream>
using namespace std;
main()
{
float fruitPrice,vegPrice,total;
int totalKiloVeg,totalKiloFruit;
cout<<"Enter vegetable price per kilogram (in coins): ";
cin>>vegPrice;
cout<<"Enter fruit price per kilogram (in coins): ";
cin>>fruitPrice;
cout<<"Enter total Kilograms of vegetables: ";
cin>>totalKiloVeg;
cout<<"Enter total Kilograms of fruits: ";
cin>>totalKiloFruit;
total=((vegPrice/1.94)*totalKiloVeg)+((fruitPrice/1.94)*totalKiloFruit);
cout<<"Total earnings in Rupees (Rps): "<<total;
}