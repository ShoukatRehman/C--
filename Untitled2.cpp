#include<iostream>
using namespace std;
int main()
{
	int a,b,sum,obt=150;
	int percent;
	 cout<<"First value";
	 cin>>a;
	 cout<<"Second value";
	 cin>>b;
	 sum=a+b;
	 percent=(sum*100)/obt;
	 
    switch (percent)
    {

        case 1:
            (percent >= 90);
            cout<<"You got an A!";
            break;

        case 2:
            (percent >= 80);
            cout<<"You got a B!";
            break;

        case 3:
            (percent >= 70);
            cout<<"You got a ";
            break;

        case 4:
            (percent >= 60);
            cout<<"You got a D!";
            break;

        case 5:
            (percent < 60);
            cout<<"You got an F!";
            break;
            default:
            	cout<<"Invalid";
            	break;
    }
}
