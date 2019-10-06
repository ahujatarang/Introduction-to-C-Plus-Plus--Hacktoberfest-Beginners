#include <iostream>  
using namespace std;  
int main()  
{  
  int n,r,s=0,t;    
  cout<<"Enter the Number = ";    
  cin>>n;
  cout<<endl;    
 t=n;    
 while(n>0)    
{    
 r=n%10;    
 s=(s*10)+r;    
 n=n/10;    
}    
if(t==s)    
cout<<"Number is Palindrome.";    
else    
cout<<"Number is not Palindrome.";   
  return 0;  
}
