// https://codeforces.com/problemset/problem/1904/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tc;
	cin >> tc;
	while (tc--)
	{
		int n;
		vector<ll> a;
		for (int i = 0; i < n; i++)
		{
			int tmp;
			cin >> tmp;
			a.pb(tmp);
		}
		vector<ll> copy = a;
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				sum += copy[j];
				if (copy[i] > a[j])
				{
				}
			}
		}
	}
	return 0;
}