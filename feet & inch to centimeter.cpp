#include<iostream>
#include<conio.h>
using namespace std;

const double inch_to_centimeter=2.54;

int main()
	{
		int feet;
		int inch;
		int totalInches;
		double centimeters;
		cout<<"Enter feet amount: "<<endl;
		cin>>feet;
		cout<<"Enter inch amount: "<<endl;
		cin>>inch;
		totalInches=(feet*12)+ inch;
		centimeters=totalInches*inch_to_centimeter;
		cout<<"input amount eguals to "
			<<centimeters<< " centimeters";
		return 0;	
	}
