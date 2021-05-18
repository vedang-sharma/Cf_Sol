#include <bits/stdc++.h>

typedef unsigned long long int ll;

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<pair<int, int>> xy(n);

    for (int i = 0; i < n; ++i) {

        int x_, y_;
        cin >> x_ >> y_;

        xy[i] = make_pair(x_, y_);
    }

    bool left, right, upper, lower;

    int ans = 0;

    for (auto i: xy) {

        left = right = upper = lower = false;

        for (auto j: xy) {

            if (i.first == j.first) {

                if (i.second > j.second) {

                    lower = true;
                    continue;
                }
                if (i.second < j.second) {

                    upper = true;
                    continue;
                }
            }
            if (i.second == j.second) {

                if (i.first > j.first) {

                    left = true;
                    continue;
                }
                if (i.first < j.first) {

                    right = true;
                    continue;
                }
            }
        }

        if (left && right && upper && lower)
            ++ans;
    }

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}
