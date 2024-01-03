// https://codeforces.com/contest/300/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vi f, s, t;

    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        if (tmp < 0)
        {
            f.push_back(tmp);
        }

        if (tmp > 0)
        {
            s.push_back(tmp);
        }
        if (tmp == 0)
        {
            t.push_back(tmp);
        }
    }

    if (s.empty())
    {
        for (int i = 0; i < 2; i++)
        {
            s.push_back(f.back());
            f.pop_back();
        }
    }

    if (f.size() % 2 == 0)
    {
        t.push_back(f.back());
        f.pop_back();
    }

    cout << f.size();
    for (int val : f)
    {
        cout << " " << val;
    }
    cout << "\n";

    cout << s.size();
    for (int val : s)
    {
        cout << " " << val;
    }
    cout << "\n";

    cout << t.size();
    for (int val : t)
    {
        cout << " " << val;
    }
    return 0;
}
