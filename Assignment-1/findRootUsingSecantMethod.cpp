#include<bits/stdc++.h>
using namespace std;

float f(float x)
{
    float f = x*x - 4*x - 10;
    return f;
}

void secant_C211009(float x1, float x2, float E)
{
    float n = 0, xm, x0, c;

    do
    {
        // calculate the intermediate value
        x0 = x2 - ((f(x2) *( x2 - x1)) / (f(x2) - f(x1)));
        cout << "The value of IT-" << n+1 << ": " << x0 << endl;

        x1 = x2;
        x2 = x0;
        n++;

        xm = x2 - ((f(x2) *( x2 - x1)) / (f(x2) - f(x1)));
    }
    while (fabs(xm - x0) >= E);

    cout << "Root of the given equation=" << x0 << endl;
    cout << "No. of iterations = " << n << endl;
}


int main()
{
    float x1, x2, E = 0.0005;
    cout<<"Enter initial estimates (x1 x2): ";
    cin >> x1 >> x2;
    secant_C211009(x1, x2, E);
    return 0;
}

