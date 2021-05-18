#include <bits/stdc++.h>

typedef unsigned long long int ll;

using namespace std;

void solve()
{
    int x, y, z;

    cin >> x >> y >> z;

    int a;

    a = sqrt((x*z)/y);

    cout << 4*(a+(x/a)+(z/a)) << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
    
    return 0;
}