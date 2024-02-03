#include <bits/stdc++.h>
using namespace std;
const double EPS = 1e-7;

//C211009 Adib Ahbab
int p, q, r, s, t, u;

double f(double x) {
    return p * exp(-x) + q * sin(x) + r * cos(x) + s * tan(x) + t * x * x + u;
}

double bisection() {
    double lo = 0, hi = 1;

    while (lo + EPS < hi) {
        double x = (lo + hi) / 2;
        f(lo) * f(x) <= 0 ? hi = x : lo = x;
    }

    return (lo + hi) / 2;
}

int main() {
    while (cin >> p >> q >> r >> s >> t >> u) {
        if (f(0) * f(1) > 0) {
            cout << "No solution\n";
        } else {
            cout << fixed << setprecision(4) << bisection() << endl;
        }
    }
    return 0;
}
