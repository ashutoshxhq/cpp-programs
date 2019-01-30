#include<iostream.h>
#include<conio.h> 
 
void main()
{
	int n,i,flag=1;
	cout<<"Enter any number:";
	cin>>n;
	
	for(i=2;i<=n/2;++i)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}
	
	if(flag)
		cout<<"\n"<<n<<" is a Prime number";
	else
	cout<<"\n"<<n<<" is not a Prime number";
 
	getch();
}