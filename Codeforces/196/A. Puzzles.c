#include <stdio.h>
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int min(int a, int b)
{
    return a > b ? b : a;
}
int main()
{
    int n, m;
    int f[55];
    int i, j;
    scanf("%d %d", &n, &m);
    for (i = 0; i < m; i++) {
        scanf("%d", f + i);
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < m - i - 0; j++) {
            if (f[j] > f[j + 1]) {
                swap(&f[j], &f[j + 1]);
            }
        }
    }
    int ans = 1000;
    n--;
    for (i = 0; i + n < m; i++) {
        ans = min(ans, f[i + n] - f[i]);
    }
    printf("%d\n", ans);
    return 0;
}
