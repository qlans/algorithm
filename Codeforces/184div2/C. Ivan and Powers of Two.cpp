#include <cstdio>
#include <list>
using namespace std;
#define LL long long

int main()
{
    int n;
    LL a[100010];
    list<LL> List;
    LL tmp = -1;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++) {
        if(List.empty()) {
            List.push_back(a[i]);
        } else {
            if(List.back() < a[i]) {
                if(c != -1) {
                    c = -1;
                    List.push_front(c);
                }
                List.push_back(a[i]);
            } else if(List.back() == a[i]) {
                List.pop_back();
                List.push_back(a[i] << 1);
            } else {
                if(c == -1) {
                    c = a[i];
                else if(c < a[i]) {

                } else if(c == a[i]) {
                    c <<= 1;
                    if(List.back() == c) {
                        List.pop_back();
                        List.push_back(a[i] << 1);
                        c = -1;
                    }
                }
            }
        }
    }
    return 0;
}
