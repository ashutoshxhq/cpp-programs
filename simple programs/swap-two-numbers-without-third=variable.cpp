#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();
int a,b;
cout<<"Enter value of a:";
cin>>a;
cout<<"Enter value of b:";
cin>>b;

a=a+b;
b=a-b;
a=a-b;

cout<<"/n a="<<a;
cout<<"/n b="<<b;
getch();
}