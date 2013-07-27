#include <cstdio>
#include <set>
#include <utility>
using namespace std;
typedef pair<int, int> pii;
#define x first
#define y second
#define MP make_pair
int main()
{
    int a, b;
    set<pii> st, ans;
    set<int> xx, yy;
    for (int i = 0; i < 8; i++) {
        scanf("%d %d", &a, &b);
        xx.insert(a);
        yy.insert(b);
        st.insert(MP(a, b));
    }
    bool ok = false;
    if (xx.size() == 3 && yy.size() == 3) {
        int i = 0;
        for (set<int>::iterator itx = xx.begin(); itx != xx.end(); itx++, i++) {
            int j = 0;
            for (set<int>::iterator ity = yy.begin(); ity != yy.end(); ity++, j++) {
                if(i == 1 && j == 1) continue;
                ans.insert(MP(*itx, *ity));
            }
        }
        if (st == ans) {
            ok = true;
        }
    }
    printf("%s\n", ok ? "respectable" : "ugly");
    return 0;
}
