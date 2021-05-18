#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> r(3);
    vector<vector<int>> vec(n, r);

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < vec[i].size(); ++j)
            cin >> vec[i][j];

    bool ans = true;

    for (int i = 0; i < 3; ++i) {

        int res = 0;

        for (int j = 0; j < n; ++j)
            res += vec[j][i];

        if (res != 0)
            ans = false;
    }

    if (ans)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}