#include <bits/stdc++.h>

typedef unsigned long long int ll;

using namespace std;

void solve()
{
    int ns;
    int sx, sy, ex, ey;

    cin >> ns >> sx >> sy >> ex >> ey;

    string str;
    cin >> str;

    int x, y;

    x = ex-sx;
    y = ey-sy;

    int e, w, n, s;
    e = w = n = s = 0;

    if (x < 0)
        w = (int)abs(x);
    else
        e = (int)abs(x);

    if (y < 0)
        s = (int)abs(y);
    else
        n = (int)abs(y);

    int i;
    for (i = 0; i < ns; ++i) {


        if (str[i] == 'N' && n > 0) {

            --n;
            continue;
        }
        if (str[i] == 'E' && e > 0) {

            --e;
            continue;
        }
        if (str[i] == 'S' && s > 0) {

            --s;
            continue;
        }
        if (str[i] == 'W' && w > 0) {
        
            --w;
            continue;
        }
        
        if (!e && !w && !n && !s)
            break;
    }

    if (s+w+n+e == 0)
        cout << i << "\n";
    else
        cout << -1 << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}