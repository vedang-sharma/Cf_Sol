#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ll;

void solve()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    scanf("%d", &n);

    int a[100000];

    for (int i = 0; i < n; ++i) {

        int e;
        scanf("%d", &e);

        a[e] = i+1;
    }

    int m;
    scanf("%d", &m);

    ll v = 0, p = 0;

    for (int i = 0; i < m; ++i) {

        int b;
        scanf("%d", &b);

        v += a[b];
        p += n-a[b]+1;
    }
    cout << v << " " << p << "\n";
}

int main()
{
    solve();

    return 0;
}