//111633226	Apr/01/2021 16:00UTC+5.5	aeroMustachio	144A - Arrival of the General	GNU C++17	Accepted	62 ms	0 KB
#include <bits/stdc++.h>

#define ll unsigned long long int

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (auto &i: v)
        cin >> i;

    int i = 0, j = n-1;

    int mx = n-1, mn = 0;

    while (i < n) {

        if (v[i] <= v[mn])
            mn = i;

        if (v[j] >= v[mx])
            mx = j;

        ++i;
        --j;
    }

    if (mx > mn) 
        cout << (mx)+(n-1-mn)-1 << "\n";
    else
        cout << (mx)+(n-1-mn) << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
    
    return 0;
}