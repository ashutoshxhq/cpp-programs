#include<conio.h>
#include<iostream.h>
#include<dos.h>
#include<process.h>
void main()
{
clrscr();
char ch;

cout<<"Uppercase Alphabates /n";
for(int i=65;i<91;++i)
{
ch=i;
cout<<ch<<":"<<i<<endl;
}

cout<<"Lowercase Alphabates /n";
for(i=97;i<123;++i)
{
ch=i;
cout<<ch<<":"<<i<<endl;
}

cout<<"Digits /n";
for(i=48;i<58;i++)
{
ch=i;
cout<<ch<<":"<<i<<endl;
}
getch();
}