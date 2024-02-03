#include<bits/stdc++.h>
using namespace std;

double res, x1, x0, e= 0.0005;
double func(double x)
{
    return res=pow(x,3) - (6*x) + 4;
}

double derivative_1(double x)
{
    return ( (3*pow(x,2)) - 6);
}

int main()
{
    cout << "Enter Initial Guess: ";
    cin >> x0;
    cout << "The value of x0: " << x0 << endl;
    int i=1;
    do
    {
        x1=x0;
        x0 = x1 - func(x1)/derivative_1(x1);
        cout << "The value of x"<<i<<" : " << x0 << endl;
        i++;
    }
    while(abs(x0-x1) >= e);

    printf("\nThe root is: %.3lf\n", x0);
    return 0;
}
