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
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        ll maxint = arr[n - 1];
        ll minint = arr[0];
        ll maxAns = max(maxint * maxint, minint * minint);
        ll minAns = min(minint * minint, min(maxint * maxint, maxint * minint));

        cout << minAns << " " << maxAns << "\n";
    }

    return 0;
}