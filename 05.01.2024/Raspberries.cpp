// https://codeforces.com/problemset/problem/1883/C

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
		int n, k;
		cin >> n >> k;

		vi a;
		int ans = INT_MAX;
		int even = 0;

		for (int i = 0; i < n; i++)
		{
			int tmp;
			cin >> tmp;
			a.pb(tmp);
		}
		for (int i = 0; i < n; i++)
		{
			ans = min(ans, k - (a[i] % k));

			if (a[i] % k == 0)
			{
				ans = 0;
				break;
			}

			if (a[i] % 2 == 0)
			{
				even++;
			}
		}

		if (k == 4)
		{
			if (even >= 2)
			{
				ans = min(ans, 0);
			}
			else if (even == 1)
			{
				ans = min(ans, 1);
			}
			else
			{
				ans = min(ans, 2);
			}
		}

		cout << ans << "\n";
	}

	return 0;
}
