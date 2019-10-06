#include <iostream>
using namespace std;
int main()
{
    int n, reversedN = 0, r;
    cout << "Enter an integer: ";
    cin >> n;
    while(n != 0)
    {
        r = n%10;
        reversedN = reversedN*10 + r;
        n /= 10;
    }
    cout << "Reversed Number = " << reversedN;
    return 0;
}
