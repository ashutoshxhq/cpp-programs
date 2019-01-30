#include<iostream.h>
#include<fstream.h>
#include<string.h>
#include<conio.h> 
 
void main()
{
 ifstream fin("my_data.txt"); 
 int count=0;
 char ch[20],c[20];
 
 cout<<"Enter a word to count:";
 gets(c);
 
 while(fin)
 {
  fin>>ch;
  if(strcmp(ch,c)==0)
   count++;
 } 
 
 cout<<"Occurrence="<<count<<"/n";
 fin.close(); 
 
 getch();
 
}