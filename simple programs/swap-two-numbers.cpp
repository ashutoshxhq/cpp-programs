#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();
int x,y,temp;
cout<<"Enter two numbers:";
cin>>x>>y;

cout<<"x="<<x<<" y="<<y;

temp=x; 
x=y; 
y=temp;

cout<<"/n x="<<x<<" y="<<y;
getch();
}

