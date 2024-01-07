// https://codeforces.com/contest/1828/problem/B

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
		cin >> n;
		int ans = 0;
		for (int i = 1; i <= n; i++)
		{
			int a;
			cin >> a;
			if (abs(a - i) != 0)
			{
				ans = __gcd(ans, abs(a - i));
			}
		}
		cout << ans << "\n";
	}

	return 0;
}