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
		int n, x;
		cin >> n >> x;
		vector<pair<int, int>> v(n);
		vi a;
		for (int i = 0; i < n; i++)
		{
			int tmp;
			cin >> tmp;
			a.pb(tmp);
			v[i].first = ((tmp - x) < 0 ? 0 : (tmp - x));
			v[i].second = tmp + x;
		}

		int count = 0;
		int first = v[0].first;
		int second = v[0].second;
		for (int i = 1; i < n; i++)
		{
			if (v[i].first > second || v[i].second < first)
			{
				count++;
				first = v[i].first;
				second = v[i].second;
			}
			first = max(first, v[i].first);
			second = min(second, v[i].second);
		}
		cout << count << endl;
	}
	return 0;
}
