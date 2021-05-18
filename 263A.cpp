#include <bits/stdc++.h>

using namespace std;

void solve()
{
    vector<int> r(5);

    vector<vector<int>> mat(5, r);

    int x, y;

    for (int i = 0; i < 5; ++i)
        for (int j = 0; j < mat[i].size(); ++j) {

            int ele;
            cin >> ele;

            if (ele) {

                x = j;
                y = i;
            }
        }

    cout << abs(2-x)+abs(2-y) << "\n";
}

int main()
{
    solve();
    
    return 0;
}