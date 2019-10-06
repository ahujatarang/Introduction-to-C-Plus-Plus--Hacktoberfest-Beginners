#include <iostream>
using namespace std;
int main()
{
    int a , b, temp;
    cout << "Enter Two Integers :";
    cout << endl << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "Before swapping :" << endl;
    cout << "a = " << a << endl << "b = " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping :" << endl;
    cout << "a = " << a << endl<< "b = " << b << endl;
    return 0;
}
