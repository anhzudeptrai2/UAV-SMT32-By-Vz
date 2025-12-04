#include <stdio.h>
void qs(int *a, int l, int r)
{
    if (l >= r)
        return;
    int i = l, j = r, p = a[(l + r) / 2];
    while (i <= j)
    {
        while (a[i] < p)
            i++;
        while (a[j] > p)
            j--;
        if (i <= j)
        {
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
            i++;
            j--;
        }
    }
    if (l < j)
        qs(a, l, j);
    if (i < r)
        qs(a, i, r);
}
int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    qs(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        if (i)
            printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}