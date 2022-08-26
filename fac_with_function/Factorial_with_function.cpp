#include <iostream>
using namespace std;

// Taking function...
int fact (int n)
{
    int fac = 1;
    for (int i = 1; i <= n; i++)
    {
        fac = fac * i;
    }
    cout << "Factorial of given no are : " << fac << endl;
}
int main()
{
    int x;
    cout << "Enter the number wich factorial you want !! : " << endl;
    cin >> x;

    fact(x);
}