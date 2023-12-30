// A
/*
#include <iostream>
using namespace std;
int main() {
    int t = 1;
    cin >> t;

    while (t) {
        int n, k;
        cin >> n >> k;

        int product = 1;
        for (int i = 0, x; i < n; i++) {
            cin >> x;
            product *= x;
        }
        if ((product <= 2023) and (2023 % product == 0)) {
            cout << "YES\n";
            cout << (2023 / product) << ' ';
            for (int i = 0; i < k - 1; i++) {
                cout << "1 ";
            }
            cout << endl;
        } else {
            cout << "NO\n";
        }
        t--;
    }

    return 0;
}
*/

// B
/*
#include <iostream>
using namespace std;
long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
void solve() {
    long long a, b;
    cin >> a >> b;
    long long g = gcd(a, b);
    if (a * b / g == b) {
        for (int i = 2; i * i <= b; i++) {
            if (i <= a && a % i == 0) {
                cout << b * i << endl;
                return;
            } else if (b % i == 0) {
                cout << b * i << endl;
                return;
            }
        }
        cout << b * b << endl;
    } else {
        cout << a * b / g << endl;
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
*/

// D
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;
const int INF = LLONG_MAX;
vector<vector<string>> v;

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < v[n / 2].size(); i++)
    {
        cout << v[n / 2][i] << endl;
    }
}

signed main()
{
    int t = 1;
    vector<string> temp = {"1"};
    v.push_back(temp);
    vector<string> hue = {"169", "961", "196"};
    v.push_back(hue);

    for (int i = 5; i <= 99; i += 2)
    {
        int ind = i / 2;
        vector<string> nh;

        for (int j = 0; j < v[ind - 1].size(); j++)
        {
            string pp = v[ind - 1][j];
            pp += "00";
            nh.push_back(pp);
        }

        string num = "";
        for (int j = 0; j < i; j++)
        {
            if (j == 0)
            {
                num.push_back('1');
            }
            else if (j == i / 2)
            {
                num.push_back('6');
            }
            else if (j == i - 1)
            {
                num.push_back('9');
            }
            else
            {
                num.push_back('0');
            }
        }
        nh.push_back(num);

        num = "";
        for (int j = 0; j < i; j++)
        {
            if (j == 0)
            {
                num.push_back('9');
            }
            else if (j == i / 2)
            {
                num.push_back('6');
            }
            else if (j == i - 1)
            {
                num.push_back('1');
            }
            else
            {
                num.push_back('0');
            }
        }
        nh.push_back(num);

        v.push_back(nh);
    }

    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
*/