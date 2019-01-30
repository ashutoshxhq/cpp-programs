#include<iostream.h>
#include<conio.h>

void main()
{
	unsigned long n,num,d,rev=0;
	cout<<"Enter any number: ";
	cin>>n;
	num=n;
 
	do
	{
		d=n%10;
		rev=(rev*10)+d;
		n=n/10;
	}while(n!=0);
	
	if(num==rev)
		cout<<endl<<"Number is Palindrome";
	else
		cout<<endl<<"Number is not Palindrome";
 
	getch();
}