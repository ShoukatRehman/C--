 #include<iostream>
 using namespace std;
 enum day{friday,saturday,sunday,monday,tuesday,wednesday,thrusday};
 int main()
 {
 	day d1,d2;
 	d1 = monday;
 	d2 = thrusday;
 	
 	int difference = d2-d1;
 	cout<<"Day between Monday through Thrusday are "<<difference<<endl;
 	if(d1<d2)
 	cout<<"Monday comes before Thursday";
 }
