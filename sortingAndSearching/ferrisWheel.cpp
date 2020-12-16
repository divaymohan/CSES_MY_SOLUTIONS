#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ll n, x;
    cin >> n >> x;
    ll In[n];
    for (ll i = 0; i < n; i++)
        cin >> In[i];
    //sort the array
    sort(In, In + n);
    ll i = 0, j = n - 1;
    ll count = 0;
    while (i <= j)
    {
        if (In[i] + In[j] <= x)
        {
            count++;
            i++;
            j--;
        }
        else
        {
            count++;
            j--;
        }
    }
    cout << count;
}
