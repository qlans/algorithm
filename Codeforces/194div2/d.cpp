#include <cstdio>
#include <iostream>
using namespace std;
const int N = 1010;
int X[N], Y[N];
int main()
{
    int n, m, x, y;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &x, &y);
        X[x] = 1;
        Y[y] = 1;
    }
    int ans = 0;
    for (int i = 2; i < n; i++) {
        ans += !X[i];
        ans += !Y[i];
    }
    if (n % 2) {
        ans += (!X[n / 2 + 1] && !Y[n / 2 + 1] ? -1 : 0);
    }
    printf("%d\n", ans);
    return 0;
}
