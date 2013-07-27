#include <cstdio>
#include <vector>
using namespace std;
int main()
{
    int n, c;
    vector<int> hasZero, noZero;
    scanf("%d", &n);
    while(n--) {
        scanf("%d", &c);
        int tmp = c;
        bool flag = false;
        for(int i = 0; i == 0 || tmp; i++) {
            if(tmp % 10 == 0) {
                flag = true;
                break;
            }
            tmp /= 10;
        }
        if(flag) {
            hasZero.push_back(c);
        } else {
            noZero.push_back(c);
        }
    }
    int ans = 0;
    if(!hasZero.empty()) {
        ans = hasZero.size();
        if(!noZero.empty()) {
            ans++;
            hasZero.push_back(noZero[0]);
        }
    }
    printf("%d\n", ans);
    for(int i = 0; i < hasZero.size(); i++) {
        if(i) printf(" ");
        printf("%d", hasZero[i]);
    }
    return 0;
}
