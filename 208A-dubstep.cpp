#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, result = "";
    cin >> s;
    bool flag = false;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i += 2;
            if (flag)
                result += " ";
        }
        else
        {
            flag = true;
            result += s[i];
        }
    }

    cout << result;
}