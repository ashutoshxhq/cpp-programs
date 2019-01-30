#include<iostream.h>
#include<stdio.h>
#include<conio.h>
 
void main()
{
	char a[30];
	int i;
	cout<<"Enter a string:";
	gets(a);
	
	for(i=0;a[i]!='\0';++i);
	
	cout<<"\nLength of the string '"<<a<<"' is "<<i;
 
	getch();
}