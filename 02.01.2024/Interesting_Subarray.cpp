// https://www.codechef.com/problems/SUBARRY

/*
  ______                 _          ____
 |___  /                | |        / __ \
    / /    ___   _ __   | |__     | |  | |  _ __
   / /    / _ \ | '_ \  | '_ \    | |  | | | '_ \
  / /__  |  __/ | |_) | | | | |   | |__| | | |_) |
 /_____|  \___| | .__/  |_| |_|    \____/  | .__/
                | |                        | |
                |_|                        |_|
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define eb emplace_back

#define f first
#define s second
#define sp " "
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795

template <class T>
void print_v(vector<T> &v)
{
    cout << "{";
    for (auto x : v)
        cout << x << ",";
    cout << "\b}";
}

ll min(ll a, ll b)
{
    if (a < b)
        return a;
    return b;
}
ll min(ll a, int b)
{
    if (a < b)
        return a;
    return b;
}
ll min(int a, ll b)
{
    if (a < b)
        return a;
    return b;
}
ll max(ll a, ll b)
{
    if (a > b)
        return a;
    return b;
}
ll max(ll a, int b)
{
    if (a > b)
        return a;
    return b;
}
ll max(int a, ll b)
{
    if (a > b)
        return a;
    return b;
}
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

string to_upper(string a)
{
    for (int i = 0; i < (int)a.size(); ++i)
        if (a[i] >= 'a' && a[i] <= 'z')
            a[i] -= 'a' - 'A';
    return a;
}

string to_lower(string a)
{
    for (int i = 0; i < (int)a.size(); ++i)
        if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] += 'a' - 'A';
    return a;
}

bool prime(ll a)
{
    if (a == 1)
        return 0;
    for (int i = 2; i <= round(sqrt(a)); ++i)
        if (a % i == 0)
            return 0;
    return 1;
}

void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;
typedef unsigned long long ull;
typedef vector<ll> vl;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int>::iterator vit;
const double eps = 1e-9;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int maxint = INT_MIN;
        int minint = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                int minim = INT_MAX;
                int maxim = INT_MIN;
                for (int k = i; k <= j; k++)
                {
                    maxim = max(maxim, arr[k]);
                    minim = min(minim, arr[k]);
                    maxint = max(maxint, maxim * minim);
                    minint = min(minint, maxim * minim);
                }
            }
        }
        cout << minint << " " << maxint << "\n";
    }
    return 0;
}
