// https://codeforces.com/contest/572/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int na, nb;
    cin >> na >> nb;
    int k, m;
    cin >> k >> m;
    int an[na];
    int bn[nb];
    for (int i = 0; i < na; i++)
    {
        cin >> an[i];
    }
    for (int i = 0; i < nb; i++)
    {
        cin >> bn[i];
    }

    if (an[k - 1] < bn[nb - m])
    {
        cout << "YES"
             << "\n";
    }
    else
    {
        cout << "NO"
             << "\n";
    }

    return 0;
}
