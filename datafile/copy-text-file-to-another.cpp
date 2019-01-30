#include<fstream.h>
#include<conio.h>
#include<iostream.h>
void main()
{

ofstream fout("sare1.txt"); 
ifstream fin("sare1.txt");
fout<<"Hello….!!";
fout.close();            

fout.open("sare2.txt"); 
char ch;
while(fin) 
{
fin>>ch;      
fout<<ch;      
}
fin.close();
fout.close();
getch();
}