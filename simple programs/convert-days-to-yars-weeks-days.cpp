#include<iostream.h>
#include<conio.h> 
void main()
{
	int y,d,w;
 
	cout<<"Enter No. of days:";
	cin>>d;
	
	y=d/365;
	d=d%365;
	w=d/7;
	d=d%7;
 
	cout<<"\n Years: "<<y<<"\n Weeks: "<<w<<"\n Days: "<<d;
	getch();
}
