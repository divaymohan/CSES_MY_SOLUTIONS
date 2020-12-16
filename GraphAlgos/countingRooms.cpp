#include <bits/stdc++.h>
using namespace std;
#define ll long long
void changeTheMat(vector<vector<char>> &input, int i, int j, int n, int m)
{
    if (i < 0 || j < 0 || i >= n || j >= m || input[i][j] == '#')
    {
        return;
    }
    input[i][j] = '#';
    changeTheMat(input, i - 1, j, n, m);
    changeTheMat(input, i, j - 1, n, m);
    changeTheMat(input, i, j + 1, n, m);
    changeTheMat(input, i + 1, j, n, m);
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<vector<char>> In;
    for (int i = 0; i < n; i++)
    {
        vector<char> temp;
        for (int j = 0; j < m; j++)
        {
            char t;
            cin >> t;
            temp.push_back(t);
        }
        In.push_back(temp);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (In[i][j] == '.')
            {
                count++;
                changeTheMat(In, i, j, n, m);
            }
        }
    }
    cout << count << endl;
    return 0;
}