#include<iostream>
using namespace std;


bool checkMember(int n)
{
    int a=0;
    int b =1;
    int c =0;
    
    while(c<n)
    {
        c = a+b;
        a = b;
        b = c; 
    }
    
    if(c == n)
         return true;
    else
       return false;
}

 int main()
 {
 	int n;
 	cin>>n;
 	if(checkMember(n) == 0)
 		cout<<"false";
 	else
 		cout<<"true";
 }
