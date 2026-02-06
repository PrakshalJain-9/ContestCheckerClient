#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Option 1: Remove the smallest (index 0). New range is a[n-1] - a[1]
    int diff1 = a[n - 1] - a[1];

    // Option 2: Remove the largest (index n-1). New range is a[n-2] - a[0]
    int diff2 = a[n - 2] - a[0];

    cout << min(diff1, diff2) << endl;
}

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}