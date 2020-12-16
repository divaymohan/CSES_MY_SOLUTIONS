#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll prev;
    cin >> prev;
    ll count = 0;
    while (n > 1)
    {
        ll curr;
        cin >> curr;
        if (curr < prev)
        {
            count = count + (prev - curr);
        }
        else
        {
            prev = curr;
        }

        n--;
    }
    cout << count;
    return 0;
}