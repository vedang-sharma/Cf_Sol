#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int v[5][5];


    for (int i = 1; i < 4; ++i) {

        for (int j = 1; j < 4; ++j)
            cin >> v[i][j];
    }

    int j = 0;
    for (int i = 0; i < 5; ++i) {

        v[j][i] = 0;
        v[i][j] = 0;
    }

    j = 4;
    for (int i = 0; i < 5; ++i) {

        v[j][i] = 0;
        v[i][j] = 0;
    }

    int ans[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};

    for (int i = 1; i < 4; ++i) {

        for (int j = 1; j < 4; ++j) {

            int sum = 0;

            sum = v[i][j]+v[i-1][j]+v[i+1][j]+v[i][j+1]+v[i][j-1];

            if (sum%2)
                ans[i-1][j-1] = 0;
        }
    }

    for (int i = 0; i < 3; ++i) {

        for (int j = 0; j < 3; ++j)
            cout << ans[i][j];

        cout << "\n";
    }
}

int main()
{
    solve();

    return 0;
}
