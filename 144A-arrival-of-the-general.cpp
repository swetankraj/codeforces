#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;
    int i = 0, j = n - 1;
    vector<int> arr;
    for (int k = 0; k < n; k++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    int high = INT_MIN, high_idx, low = INT_MAX, low_idx;
    for (int x : arr)
    {
        if (x > high)
        {
            high = x;
            high_idx = i;
        }
        i++;
    }

    arr[high_idx] = INT_MAX;
    ans += high_idx;
    for (j; j >= 0; j--)
    {
        if (arr[j] < low)
        {
            low = arr[j];
            low_idx = j;
        }
    }

    if (high_idx > low_idx)
        ans += n - low_idx - 2;
    else
        ans += n - low_idx - 1;

    cout << ans << '\n';
    return 0;
}