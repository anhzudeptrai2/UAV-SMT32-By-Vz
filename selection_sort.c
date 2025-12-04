#include <stdio.h>
int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n - 1; i++)
    {
        int mn = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[mn])
                mn = j;
        if (mn != i)
        {
            int t = a[i];
            a[i] = a[mn];
            a[mn] = t;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i)
            printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}