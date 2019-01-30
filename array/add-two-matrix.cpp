#include<iostream.h>
#include<process.h>
#include<conio.h>
 
void main()
{
	int A[10][10],B[10][10],c[10][10];
	int i,j,m,n,p,q;
	cout<<"Enter no. of rows and cloumns of matrix A:";
	cin>>m>>n;
	cout<<"\nEnter no. of rows and columns of matrix B:";
	cin>>p>>q;
	
	if(m==p&&n==q)
		cout<<"\n\nMatrices can be Added";
	else
	{
		cout<<"\n\nMatrices can not Added";
		exit(0);
	}
	
	cout<<"\nEnter matrix A row wise:";
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			cin>>A[i][j];
	}
	
	cout<<"\nMatrix A:\n";
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		cout<<A[i][j]<<" ";
		cout<<"\n";
	}
	
	cout<<"\nEnter Matrix B row wise:";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		cin>>B[i][j];
	}
	
	cout<<"\n\nMatrix B:\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		cout<<B[i][j]<<" ";
		cout<<"\n";
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		c[i][j]=A[i][j]+B[i][j];
	}
	
	cout<<"\nSum of Matrices A and B:\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		cout<<c[i][j]<<" ";
		cout<<"\n";
	}
	
	getch();
}