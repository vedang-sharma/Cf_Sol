#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, t;
    cin >> n >> t;

    string sch;
    cin >> sch;

    while (t--) {

        for (int i = 0; i < n; ++i) {

            if (sch[i] == 'B') {

                if (sch[i+1] == 'G') {

                    swap(sch[i], sch[i+1]);
                    
                    ++i;
                }
            }
        }
    }

    cout << sch << "\n";
}

int main()
{
    solve();
    return 0;
}