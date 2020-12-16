#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll sum = 0;
    for (ll i = 1; i <= n - 1; i++)
    {
        ll a;
        cin >> a;
        sum += a;
    }
    int res = (n * (n + 1) / 2) - sum;
    cout << res;
    return 0;
}