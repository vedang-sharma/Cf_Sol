#include <bits/stdc++.h>

#define unsigned long long int ll;

using namespace std;

void solve()
{
    int n, m, d;
    cin >> n >> m >> d;

    vector<int> mat(n*m);

    for (auto &i: mat)
        cin >> i;

    sort(mat.begin(), mat.end());

    int k = mat[ceil((mat.size()-1)/2.0)];

    int ans = 0;

    for (int i = 0; i < n*m; ++i) {

        if (!(abs(mat[i]-k)%d))
            ans += abs(mat[i]-k)/d;
        else {

            cout << "-1\n";
            return;
        }
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