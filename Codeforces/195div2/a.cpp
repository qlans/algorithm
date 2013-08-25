#include <cstdio>
using namespace std;
inline int myabs(int x)
{
    return x < 0 ? -x : x;
}
int main()
{
    int x, y, z;
    scanf("%d %d", &x, &y);
    z = myabs(x) + myabs(y);
    if (x > 0) {
        if (y > 0) {
            printf("0 %d %d 0\n", z, z);
        } else {
            printf("0 %d %d 0\n", -z, z);
        }
    } else {
        if (y > 0) {
            printf("%d 0 0 %d\n", -z, z);
        } else {
            printf("%d 0 0 %d\n", -z, -z);
        }
    }
    return 0;
}
