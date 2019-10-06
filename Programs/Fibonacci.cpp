#include<iostream>
using namespace std;
int main()
{
	int n,a=0,b=1,c=0;
	cout<<"ENTER NUMBER OF TERMS :  ";
	cin>>n;
	cout<<"\nFIBONACCI SERIES : "<<a<<" "<<b;
	for(int i=2;i<n;i++)
	{
	c=a+b;	
	cout<<" "<<c;  
	a=b;
	b=c;
	}   
	return 0;
} 
