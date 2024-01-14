// https://codeforces.com/problemset/problem/1221/C

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
		int c, m, x;
		cin >> c >> m >> x;
		int minim = min(c, min(m, x));
		c -= minim;
		m -= minim;
		x -= minim;

		cout << minim + min(c, min(m, (c + m) / 3)) << "\n";
	}

	return 0;
}