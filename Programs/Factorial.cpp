#include<iostream>
using namespace std;
int main()
{
	int n,m=1;
	cout<<"ENTER NUMBER : ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	m=m*i;	
	}
	cout<<endl<<"FACTORIAL OF NUMBER "<<n<<" IS : "<<m;
	return 0;
} 
