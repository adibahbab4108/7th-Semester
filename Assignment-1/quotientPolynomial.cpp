#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the degree of the polynomial: ";
    cin >> n;

    int coefficients[n + 1];
    cout << "Enter the coefficients of the polynomial ";
    for (int i = n; i >= 0; i--)
        cin >> coefficients[i];

    int root;
    cout << "Enter the root value (x): ";
    cin >> root;
    vector<int> res;
    int b=0;
    for(int i=n-1; i>=0; i--)
    {
        b=coefficients[i+1]+b*root;
        res.push_back(b);
    }

    // C211009 Adib Ahbab
    cout << "q(x):";
    for (int i = 0; i < res.size(); i++)
        cout << " " << res[i];

    cout << endl;

    return 0;
}

