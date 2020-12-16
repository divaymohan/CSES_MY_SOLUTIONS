#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin >> s;
    ll ans = 1;
    ll count = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i - 1] == s[i])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        ans = max(count, ans);
    }
    cout << ans;
    return 0;
}