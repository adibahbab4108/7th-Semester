#include<bits/stdc++.h>
using namespace std;

#define MAX_ITER 1000000
#define TOLERANCE 1e-6

double func(double x)
{
    return x*x*x - x + 2;
}

void False_Position_Method(double a, double b)
{
    if (func(a) * func(b) >= 0)
    {
        cout << "Incorrect assumption of a & b. Please choose different initial values.\n";
        return;
    }

    double c = a;

    for (int i=0; i < MAX_ITER; i++)
    {
        // Find the point that touches x-axis
        c = (a * func(b) - b * func(a)) / (func(b) - func(a));

        if (fabs(func(c)) < TOLERANCE)
        {
            cout << "Root found with sufficient accuracy.\n";
            break;
        }
        // Decide the side to repeat the steps
        else if (func(c) * func(a) < 0)
            b = c;
        else
            a = c;
    }
    cout << "The value of root is : " << c;
}

int main()
{
    double a, b;
    cout << "Enter initial values a and b: ";
    cin >> a >> b;

    False_Position_Method(a, b);

    return 0;
}
