#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char *s ="Hello World";
	cout<<s<<endl;
	
	char *str ="Hello world";
	cout<<str<<endl;
		
	if(0)//strcmp(s,str))
	{
		cout<<"equal";
	}
	else
	{
		cout<<"Not equal";
	}
}
