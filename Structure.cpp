#include<iostream>
using namespace std;
struct Part
{
    int mn;
	int pn;
	float cost;	
};
int main()
{
	Part p1;
	p1.mn=567;
	p1.pn=324;
	p1.cost=232.3;
	
	cout<<"Model Number "<<p1.mn<<endl;
	cout<<"Part Number "<<p1.pn<<endl;
	cout<<"Cost is Rs "<<p1.cost<<endl;
}
