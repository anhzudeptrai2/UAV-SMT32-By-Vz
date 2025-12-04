#include <stdio.h>
#include <stdlib.h>
int *a, *tmp;
void ms(int l, int r)
{
    if (l >= r)
        return;
    int m = (l + r) / 2;
    ms(l, m);
    ms(m + 1, r);
    int i = l, j = m + 1, k = l;
    while (i <= m && j <= r)
    {
        if (a[i] <= a[j])
            tmp[k++] = a[i++];
        else
            tmp[k++] = a[j++];
    }
    while (i <= m)
        tmp[k++] = a[i++];
    while (j <= r)
        tmp[k++] = a[j++];
    for (i = l; i <= r; i++)
        a[i] = tmp[i];
}
int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    a = malloc(sizeof(int) * n);
    tmp = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    if (n > 0)
        ms(0, n - 1);
    for (int i = 0; i < n; i++)
    {
        if (i)
            printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    free(a);
    free(tmp);
    return 0;
}