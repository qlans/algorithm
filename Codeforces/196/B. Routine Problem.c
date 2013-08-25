#include <stdio.h>
int abs(int x)
{
    return x >= 0 ? x : -x;
}
int gcd(int a, int b)
{
    return !b ? a : gcd(b, a % b);
}
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int g = gcd(a, b);
    int _b = b * c;
    int _d = a * d;
    int p, q;
    if (_b < _d) {
        int tmp = _b;
        _b = _d;
        _d = tmp;
    }
    _d = _b - _d;
    g = gcd(_d, _b);
    printf("%d/%d\n", _d / g, _b / g);
    return 0;
}
