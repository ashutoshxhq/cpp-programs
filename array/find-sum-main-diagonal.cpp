#include<iostream.h>
#include<conio.h>

void main()
{
	int a[5][5],d1sum=0,m,i,j;
	cout<<"Enter size of the square matrix(max 5):";
	cin>>m;
	cout<<"\nEnter the Matrix row wise:\n";
	
	for(i=0;i<m;i++)
		for(j=0;j<m;++j)
			cin>>a[i][j];
			
	for(i=0;i<m;++i)
		for(j=0;j<m;++j)
		{
			if(i==j)
				d1sum+=a[i][j];
		}
	
	cout<<"\nSum of main diagonal is "<<d1sum;

    getch();
}