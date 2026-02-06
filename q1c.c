#include <stdio.h>
#include <stdlib.h>

void solve()
{
    int n;
    if (scanf("%d", &n) != 1)
        return;

    int *a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Since the array is sorted:
    // Option 1: Remove the first element (smallest). Instability = last - second
    int diff1 = a[n - 1] - a[1];

    // Option 2: Remove the last element (largest). Instability = second_last - first
    int diff2 = a[n - 2] - a[0];

    // Print the minimum of the two
    if (diff1 < diff2)
    {
        printf("%d\n", diff1);
    }
    else
    {
        printf("%d\n", diff2);
    }

    free(a);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }
    return 0;
}