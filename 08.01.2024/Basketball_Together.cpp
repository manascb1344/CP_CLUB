//	 https://codeforces.com/problemset/problem/1725/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, d;
	cin >> n >> d;
	vi a(n);
	int maxim = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		maxim = max(maxim, a[i]);
	}
	sort(a.begin(), a.end());

	int x = 0;
	int win = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		x += (d / a[i] + 1);
		if (x > n)
		{
			break;
		}
		win++;
	}

	cout << win << "\n";

	return 0;
}