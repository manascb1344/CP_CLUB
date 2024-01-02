// https://codeforces.com/contest/1899/problem/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int maxim = arr[0];
        int sum = arr[0];
        for (int i = 1; i < n; i++)
        {
            if ((abs(arr[i]) % 2 == abs(arr[i - 1]) % 2) || (sum < 0))
            {
                sum = 0;
            }
            sum += arr[i];
            maxim = max(maxim, sum);
        }
        cout << maxim << "\n";
    }

    return 0;
}