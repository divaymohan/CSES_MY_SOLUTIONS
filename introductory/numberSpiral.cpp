#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll r, c;
        cin >> r >> c;
        ll maxi = max(r, c);
        ll ans = 0;
        ll z = (maxi - 1) * (maxi - 1);
        if (maxi % 2 == 0)
        {
            if (maxi == c)
            {
                ans = z + r;
            }
            else
            {
                ans = z + 2 * maxi - c;
            }
        }
        else
        {
            if (maxi == r)
            {
                ans = z + c;
            }
            else
            {
                ans = z + 2 * maxi - r;
            }
        }
        cout << ans << endl;
    }
    return 0;
}