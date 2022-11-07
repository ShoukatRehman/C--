#include<iostream>
using namespace std;
enum boolean{        false,true};
int main()
{
	char ch;
	boolean muslim = false;
	cout<<"Are you MUslim";
	ch=getch();
	if(ch=='y'||ch'Y')
	muslim = true;
	if(muslim)
	cout<<"\nYou are Muslim";
	else 
	cout<<"\nYou are not Muslim";
}
