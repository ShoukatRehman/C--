#include<iostream>
using namespace std;
struct Distance
{
	int feet;
	float inches;
};
int main()
{
	Distance d1,d2,d3;
	cout<<"Enter feet for 1st Distance ";
	cin>>d1.feet;
	cout<<"Enter inches for 1st Distance ";
	cin>>d1.inches;
	cout<<"Enter feet for 2nd Distance ";
	cin>>d2.feet;
	cout<<"Enter inches for 2nd Distance ";
	cin>>d2.inches;
	
	d3.inches = d1.inches + d2.inches ;
	d3.feet = 0 ;
	if (d3.inches >= 12.0)
	{
		d3.inches -=12.0 ;
		d3.feet++;
	}
	d3.feet += d1.feet + d2.feet ;
	cout<<"Total Distance is "<<d3.feet<<"\"-"<<d3.inches<<"\"";=
}
