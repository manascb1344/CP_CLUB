// https://codeforces.com/problemset/problem/1015/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll ans = 0;

	int n, m;
	cin >> n >> m;
	vector<ll> a;
	ll suma = 0, sumb = 0;

	for (ll i = 0; i < n; i++)
	{
		ll tmp1, tmp2;
		cin >> tmp1 >> tmp2;
		a.pb(tmp1 - tmp2);
		suma += tmp1;
	}
	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());

	while (suma > m && ans < n)
	{
		suma -= a[ans];
		ans += 1;
	}

	if (suma <= m)
	{
		cout << ans << "\n";
	}
	else
	{
		cout << "-1"
				 << "\n";
	}

	return 0;
}
