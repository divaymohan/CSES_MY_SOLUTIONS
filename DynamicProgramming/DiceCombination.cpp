#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll getComb(ll n, ll *dp)
{
    if (n < 1)
        return 0;
    if (n == 1)
    {
        dp[n] = 1;
        return dp[n];
    }

    if (dp[n] != 0)
        return dp[n];
    if (n <= 6)
    {
        dp[n] = (1 + getComb(n - 1, dp) % 1000000007 + getComb(n - 2, dp) % 1000000007 + getComb(n - 3, dp) % 1000000007 + getComb(n - 4, dp) % 1000000007 + getComb(n - 5, dp) % 1000000007 + getComb(n - 6, dp) % 1000000007) % 1000000007;
    }
    else
    {
        dp[n] = (getComb(n - 1, dp) % 1000000007 + getComb(n - 2, dp) % 1000000007 + getComb(n - 3, dp) % 1000000007 + getComb(n - 4, dp) % 1000000007 + getComb(n - 5, dp) % 1000000007 + getComb(n - 6, dp) % 1000000007) % 1000000007;
    }
    return dp[n];
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll n;
    cin >> n;
    ll dp[n + 1] = {0};
    getComb(n, dp);
    cout << dp[n] % 1000000007;
    return 0;
}