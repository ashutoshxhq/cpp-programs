#include<iostream.h>
#include<conio.h> 
 
void main()
{
	int arr[5][5],b=0,i,j,n;
	cout<<"Enter size of matrix(max 5):";
	cin>>n;
	cout<<"Enter the matrix:\n";
	
	for(i=0;i<n;++i)
		for(j=0;j<n;++j)
			cin>>arr[i][j];
	
	for(i=0;i<n;++i)
		for(j=0;j<n;++j)
			if(i>j)
			    b+=arr[i][j];
	
	cout<<"\nSum of elements below the diagonal:"<<b;
 
	getch();
}