#include <bits/stdc++.h>

typedef unsigned long long int ll;

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<pair<int, int>> pages(7);

    for (int i = 0; i < 7; ++i) {

        int e;
        cin >> e;

        pages[i] = make_pair(i+1, e);
    }

    int i = -1;

    while (n > 0) {
        
        i = (i+1)%7;

        n -= pages[i].second;
    }

    cout << pages[i].first << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
    
    return 0;
}