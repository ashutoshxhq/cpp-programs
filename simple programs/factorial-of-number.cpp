#include<iostream.h>
#include<conio.h>

void main()
{     
	unsigned long i,fac,n;
	cout<<"Enter number: ";
	cin>>n;
 
	for(i=1,fac=1;i<=n;++i)
	{
		fac=i*fac;
	}
 
	cout<<"Factorial of "<<n<<" is: "<<fac;
	getch();
}
