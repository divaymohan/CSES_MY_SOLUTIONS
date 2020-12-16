#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    set<ll> us;
    for (ll i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        us.insert(temp);
    }
    cout << us.size();
    return 0;
}