#include <cstdio>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int s = 1, e = n * n;
    for (int i = 0; i < n; i++) {
        printf("%d %d", s, e);
        s++;
        e--;
        for (int j = 1; j < n / 2; j++) {
            printf(" %d %d", s, e);
            s++;
            e--;
        }
        printf("\n");
    }
}
