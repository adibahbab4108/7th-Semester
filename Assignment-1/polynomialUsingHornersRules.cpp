#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, p = 0;
    cout << "Enter the degree of polynomial n and value x (space separated): ";
    cin >> n >> x;

    int quotient[n + 1];

    // Input coefficients
    for (int i = n; i >= 0; i--)
    {
        cout << "Enter coefficient for X^" << i << " : ";
        cin >> quotient[i];
    }
//C211009 Adib Ahbab
    // Evaluate the polynomial using Horner's rule
    for (int i = n; i >= 0; i--)
    {
        p = p * x + quotient[i];
    }

    cout << "f(" << x << ") = " << p << endl;

    return 0;
}
