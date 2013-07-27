#include <iostream>
using namespace std;
typedef long long LL;
int main()
{
    LL n;
    cin >> n;
    for (LL i = 3; ; i *= 3) {
        if (n % i) {
            cout << (n + i) / i << endl;
            break;
        }
    }
    return 0;
}
