#include <bits/stdc++.h>
using namespace std;

#define ll int
void showarray(int *In, int k)
{
    for (int i = 0; i < k; i++)
    {
        cout << In[i] << " ";
    }
    cout << endl;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ll n, m, k;
    cin >> n >> m >> k;
    int availale[m];
    int demanded[n];
    for (ll i = 0; i < n; i++)
        cin >> demanded[i];
    for (ll i = 0; i < m; i++)
        cin >> availale[i];

    //sort both arrays
    int ks = sizeof(availale) / sizeof(availale[0]);
    // cout<<ks<<endl;
    sort(availale, availale + ks);
    ks = sizeof(demanded) / sizeof(demanded[0]);
    // cout<<ks<<endl;
    sort(demanded, demanded + ks);
    // showarray(demanded, ks);

    ll count = 0;
    ll i = 0, j = 0;
    while (i < m && j < n)
    {
        if (demanded[j] >= availale[i] - k && demanded[j] <= availale[i] + k)
        {
            count++;
            // cout<<count<<endl;
            i++;
            j++;
        }
        else
        {
            if (demanded[j] > availale[i])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        // cout<<i<<j<<endl;
    }

    cout << count;
}