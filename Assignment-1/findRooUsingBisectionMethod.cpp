#include <bits/stdc++.h>
using namespace std;

double E = 0.0001;
// Function for which we want to find the root
double f(double x)
{
    return x * x - x- 2;
}

// Bisection Method implementation
double bisectionMethod(double a, double b)
{
    if (f(a) * f(b) >= 0)
    {
        cout << "Bisection method cannot be applied because f(a) and f(b) have the same sign." << endl;
        return NAN; // Return NaN for indicating an error
    }

    double c;

    do
    {
        c = (a + b) / 2;

        // Check if root is found
        if (f(c) == 0.0)
        {
            cout << "Root found at x = " << c << endl;
            return c;
        }
        else if (f(c) * f(a) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
    } while (fabs(b - a) > E);

    cout << "Root found at x = " << c << endl;
    return c;
}
//C211009 Adib Ahbab
int main()
{
    double a, b;

    cout << "Enter the initial interval [a, b]: ";
    cin >> a >> b;

    double root = bisectionMethod(a, b);

    if (!isnan(root))
    {
        cout << "Approximate root: " << root << endl;
    }

    return 0;
}
