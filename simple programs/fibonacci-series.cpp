#include<iostream.h>
#include<conio.h>

void main()
{
	long n,first=0,second=1,third;
	cout<<"How many numbers?";
	cin>>n;
	cout<<"Fibonacci series\n"<<first<<" "<<second;
 
	for(int i=2;i<n;++i)
	{
		third=first+second;
		cout<<" "<<third;
		first=second;
		second=third;
	}
 
	getch();
}