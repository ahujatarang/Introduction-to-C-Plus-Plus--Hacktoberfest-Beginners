#include <iostream>
using namespace std;
int sum(int a,int b)
{
    int c=0;
    c=a+b;
    return c;
}
int main()
{
    int a, b, s;

    cout << "Enter two integers: "<<endl;
    cin >> a;
    cin>> b;
    cout<<endl;

    s=sum(a,b);

    cout << a << " + " <<  b << " = " << s;
    return 0;
}
