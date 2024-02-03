#include <bits/stdc++.h>
using namespace std;
//C211009- Adib Ahbab

int main() {
    string line;
    while (getline(cin, line)) {
        istringstream ss(line);
        vector<int> coefficients;
        int num;

        while (ss >> num) {
            coefficients.push_back(num);
        }

        getline(cin, line);
        ss = std::istringstream(line);
        vector<int> xValues;

        while (ss >> num) {
            xValues.push_back(num);
        }

        int n = coefficients.size() - 1;

        for (size_t i = 0; i < xValues.size(); ++i) {
            if (i > 0)
                cout << " ";

            int result = 0;
            for (int j = 0; j <= n; ++j) {
                result += coefficients[j] * pow(xValues[i], n - j);
            }

            cout << result;
        }
        cout << endl;
    }

    return 0;
}
