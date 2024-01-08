// https://codeforces.com/contest/1907/problem/C

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
		string s;
		cin >> s;
		int maxim = INT_MIN;
		unordered_map<char, int> ump;
		for (int i = 0; i < n; i++)
		{
			ump[s[i]]++;
		}

		for (int i = 0; i < n; i++)
		{
			maxim = max(maxim, ump[i]);
		}

		

	}

	return 0;
}