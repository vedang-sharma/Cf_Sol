#include <bits/stdc++.h>

typedef unsigned long long int ll;

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    priority_queue<int, vector<int>, greater<int>> minp;
    priority_queue<int> maxp;

    for (int i = 0; i < m; ++i) {

        int e;
        cin >> e;

        minp.push(e);
        maxp.push(e);
    }

    int pmax = 0, pmin = 0;

    for (int i = 0; i < n; ++i) {

        int mx, mn;

        if (minp.top() == 0)
            minp.pop();

        mx = maxp.top();
        maxp.pop();
        mn = minp.top();
        minp.pop();

        pmax += mx;
        pmin += mn;

        maxp.push(mx-1);
        minp.push(mn-1);      
    }

    cout << pmax << " " << pmin << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    solve();

    return 0;
}