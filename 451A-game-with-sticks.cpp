#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if (min(n, m) & 1)
        cout << "Akshat" << '\n';
    else
        cout << "Malvika" << '\n';
}