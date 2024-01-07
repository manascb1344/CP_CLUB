// https://codeforces.com/contest/1857/problem/A

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
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			int tmp;
			cin >> tmp;
			sum += tmp;
		}
		if (n > 1)
		{
			if (sum % 2 == 0)
			{
				cout << "YES\n";
			}
			else
			{
				cout << "NO\n";
			}
		}
		else
		{
			cout << "NO\n";
		}
	}

	return 0;
}