// https://codeforces.com/problemset/problem/1618/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll gcd1 = 0, gcd2 = 0;
    for (int i = 0; i < n; i += 2)
    {
        gcd1 = __gcd(gcd1, a[i]);
    }
    for (int i = 1; i < n; i += 2)
    {
        gcd2 = __gcd(gcd2, a[i]);
    }

    bool flag = true;
    for (int i = 0; i < n; i += 2)
    {   
        if (a[i] % gcd2 == 0)
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << gcd2 << "\n";
        return;
    }

    flag = true;
    for (int i = 1; i < n; i += 2)
    {
        if (a[i] % gcd1 == 0)
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << gcd1 << "\n";
        return;
    }

    cout << 0 << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}
