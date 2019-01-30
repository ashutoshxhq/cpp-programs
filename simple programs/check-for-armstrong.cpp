#include<iostream.h>
#include<math.h>
#include<conio.h>
 
void main()
{
	int n,m=0,p=0,x,y;
	cout<<"Enter any number: ";
	cin>>n;
 
	y=n;
	
	while(y!=0){
		y=y/10;
		p++;
	}
	
	y=n;
	
	while(n!=0)
	{
		x=n%10;
		m+=pow(x,p);
		n=n/10;
	}
	
	if(y==m)
		cout<<"The given number is an armstrong number";
	else
		cout<<"The given number is not an armstrong number";
 
	getch();
}