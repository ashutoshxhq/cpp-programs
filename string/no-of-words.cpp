#include<iostream.h>
#include<stdio.h>
#include<conio.h>
 
void main()
{
	char a[100];
	int i,count=1;
	
	cout<<"Enter a string:";
	gets(a);
	
	for(i=0;a[i]!='\0';++i)
	{
		if(a[i]==' ')
			count++;
	}
	
	cout<<"\nThere are "<<count<<" words in the given string";
 
	getch();
}