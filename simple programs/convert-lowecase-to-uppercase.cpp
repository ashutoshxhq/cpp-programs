#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char ch;
cout<<"Enter any Alphabet:";
cin>>ch;

if(ch>=’a’&&ch<=’z’)
{
cout<<"/ntYou have entered a lowercase alphabet";
ch=ch-32;
cout<<"/n/nThe uppercase alphabet is "<<ch;
}
else
{
cout<<"/n/tYou have entered an Uppercase alphabet";
ch=ch+32;
cout<<"/n/nThe lowercase alphabet is "<<ch;
}
getch();
}