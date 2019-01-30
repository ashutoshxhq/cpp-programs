#include<iostream.h>
#include<conio.h> 

void main()
{
	char str1[30],str2[30],str3[60];
	int i,j;
	cout<<"Enter first string:";
	gets(str1);
	cout<<"\nEnter second string:";
	gets(str2);
	
	for(i=0;str1[i]!='\0';++i)
		str3[i]=str1[i];
		
	for(j=0;str2[j]!='\0';++j)
		str3[i+j]=str2[j];
		
	str3[i+j]='\0';
	
	cout<<"\nThe concatenated string is "<<str3;
 
	getch();
}
