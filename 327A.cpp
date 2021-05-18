#include <bits/stdc++.h>

#define unsigned long long int ll;

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, a, c0 = 0, c1 = 0, mc0 = -1  ;

    cin >> n;

    while (n--) {

        cin >> a;

        if (a == 1) {

            ++c1;

            if (c0 > 0)
                --c0;
        }
        else {

            ++c0;

            if (c0 > mc0)
                mc0 = c0;
        }
    }

    cout << c1+mc0 << "\n";

    return 0;
}