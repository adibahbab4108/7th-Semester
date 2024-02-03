#include<bits/stdc++.h>
using namespace std;
#define   f(x)   pow(x,5) + 3*pow(x,3) - 10 //the function
#define   g(x)   sqrt( 10/((x*x*x)-3) )

int main()
{
    float x0,x1;
    cout<< "Initial guess:";
    cin>>x0;
//C211009 Adib Ahbab
    while(fabs((x1-x0)/x1)>0.005)
    {
        x1=g(x0);//working formula
        x0=x1;
    }
    cout<< "The root of the equation = "<<x0;
    return 0;
}
