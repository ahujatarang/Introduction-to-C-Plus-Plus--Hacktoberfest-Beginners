#include<iostream>
using namespace std;
int main()
{ 
    int n;
    cout<<"ENTER NUMBER TO BE CHECKED : ";
    cin>>n;
    cout<<"\n";
    for(int i=0;i<n-2;i++)
    {
    if(n%2==0)
	{
	cout<<"NUMBER IS NOT PRIME";
	break;	
	}
	else
	{		
	cout<<"NUMBER IS PRIME";
	break;
	}	
	}
	return 0;
} 
