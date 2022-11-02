#include<iostream>
using namespace std;
int main()
{
	int math,physics,computer;
	 
	int sum, total = 300;
   float per;

   cout<<"\nEnter marks of subjects :\n ";
 
   cout<<"Please enter math marks ";
    cin>>math;
   cout<<"Please enter physics marks ";
   cin>>physics;
   cout<<"Please enter computer marks ";
   cin>> computer;

   sum = math+physics+computer;
   
   per = (sum * 100) / total;
   if (per>=80)
   {
   	cout<<"You are pass with Distinction ";
   }
   else if(per>=60<80)
   {
   	cout<<"First Division ";
   }
   else if (per>=50<60)
   {
   	cout<<"Second Division";
   } 
   else if (per>=40<50)
   {
   	cout<<"Third Division";
   }
   else
   {
   	cout<<"Fail";
   }
   cout<<"\nStudent Percentage Is : "<< per<<endl;

}
