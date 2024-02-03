#include<bits/stdc++.h>
using namespace std;

const double E = 1e-9;

double polynomial(double x)
{
    return x * x * x - 6 * x + 4;
}

double derivative(double x)
{
    return 3 * x * x - 6;
}

// Function to find the root using the Newton-Raphson method C211009
double findRoot(double x0)
{
    double x = x0;
    while (true)
    {
        double xNext = x - polynomial(x) / derivative(x);
        if (fabs(xNext - x) < E)
        {
            return xNext;
        }
        x = xNext;
    }
}

int main()
{
    vector<double> roots;

    // Find the roots using the Newton-Raphson method for x values in the range [-1000, 1000]
    for (int x0 = -1000; x0 <= 1000; x0++)
    {
        double root = findRoot(x0);
        roots.push_back(root);
    }

    // Output the roots correct to 3 decimal places
    for (int i = 0; i < roots.size(); i++)
    {
        cout << "Root :" << i+1 <<setprecision(3)<< fixed << roots[i] << endl;
    }

    return 0;
}

