// BEGIN CUT HERE

// END CUT HERE
#line 5 "GUMIAndSongsDiv1.cpp"
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <fstream>
#include <numeric>
#include <iomanip>
#include <bitset>
#include <list>
#include <stdexcept>
#include <functional>
#include <utility>
#include <ctime>
using namespace std;

#define PB push_back
#define MP make_pair
#define x first
#define y second

#define REP(i,n) for(i=0;i<(n);++i)
#define FOR(i,l,h) for(i=(l);i<=(h);++i)
#define FORD(i,h,l) for(i=(h);i>=(l);--i)

typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<double> VD;
typedef long long LL;
typedef pair<int,int> PII;


class GUMIAndSongsDiv1
{
public:
    int maxSongs(vector <int> duration, vector <int> tone, int T)
    {
        vector<PII> p;
        int len = duration.size();
        for (int i = 0; i < len; i++) {
            p.push_back(MP(tone[i], duration[i]));
        }
        sort(p.begin(), p.end());
        int ans = 0;
        for(int i = 0; i < len; i++) {
            for(int j = 0; j <= i; j++) {
                if (i == j) {
                    if (T >= p[j].y) {
                        ans = max(ans, 1);
                    }
                    continue;
                }
                if (T < (p[i].x - p[j].x) + p[i].y + p[j].y) {
                    continue;
                }
                int total = T - ((p[i].x - p[j].x) + p[i].y + p[j].y);
                vector<int> tmp;
                for(int k = j + 1; k < i; k++) {
                    tmp.push_back(p[k].y);
                }
                sort(tmp.begin(), tmp.end());
                int length = tmp.size();
                int cnt = 2;
                for(int k = 0; k < length; k++) {
                    if(total >= tmp[k]) {
                        total -= tmp[k];
                        cnt++;
                    }
                }
                ans = max(cnt, ans);
            }
        }
        return ans;
    }

// BEGIN CUT HERE
public:
    void run_test(int Case)
    {
        if ((Case == -1) || (Case == 0)) test_case_0();
        if ((Case == -1) || (Case == 1)) test_case_1();
        if ((Case == -1) || (Case == 2)) test_case_2();
        if ((Case == -1) || (Case == 3)) test_case_3();
        if ((Case == -1) || (Case == 4)) test_case_4();
    }
private:
    template <typename T> string print_array(const vector<T> &V)
    {
        ostringstream os;
        os << "{ ";
        for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\",";
        os << " }";
        return os.str();
    }
    void verify_case(int Case, const int &Expected, const int &Received)
    {
        cerr << "Test Case #" << Case << "...";
        if (Expected == Received) cerr << "PASSED" << endl;
        else
        {
            cerr << "FAILED" << endl;
            cerr << "\tExpected: \"" << Expected << '\"' << endl;
            cerr << "\tReceived: \"" << Received << '\"' << endl;
        }
    }
    void test_case_0()
    {
        int Arr0[] = {3, 5, 4, 11};
        vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0])));
        int Arr1[] = {2, 1, 3, 1};
        vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0])));
        int Arg2 = 17;
        int Arg3 = 3;
        verify_case(0, Arg3, maxSongs(Arg0, Arg1, Arg2));
    }
    void test_case_1()
    {
        int Arr0[] = {100, 200, 300};
        vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0])));
        int Arr1[] = {1, 2, 3};
        vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0])));
        int Arg2 = 99;
        int Arg3 = 0;
        verify_case(1, Arg3, maxSongs(Arg0, Arg1, Arg2));
    }
    void test_case_2()
    {
        int Arr0[] = {1, 2, 3, 4};
        vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0])));
        int Arr1[] = {1, 1, 1, 1};
        vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0])));
        int Arg2 = 100;
        int Arg3 = 4;
        verify_case(2, Arg3, maxSongs(Arg0, Arg1, Arg2));
    }
    void test_case_3()
    {
        int Arr0[] = {9, 11, 13, 17};
        vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0])));
        int Arr1[] = {2, 1, 3, 4};
        vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0])));
        int Arg2 = 20;
        int Arg3 = 1;
        verify_case(3, Arg3, maxSongs(Arg0, Arg1, Arg2));
    }
    void test_case_4()
    {
        int Arr0[] = {87,21,20,73,97,57,12,80,86,97,98,85,41,12,89,15,41,17,68,37,21,1,9,65,4,
                      67,38,91,46,82,7,98,21,70,99,41,21,65,11,1,8,12,77,62,52,69,56,33,98,97
                     };
        vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0])));
        int Arr1[] = {88,27,89,2,96,32,4,93,89,50,58,70,15,48,31,2,27,20,31,3,23,86,69,12,59,
                      61,85,67,77,34,29,3,75,42,50,37,56,45,51,68,89,17,4,47,9,14,29,59,43,3
                     };
        vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0])));
        int Arg2 = 212;
        int Arg3 = 12;
        verify_case(4, Arg3, maxSongs(Arg0, Arg1, Arg2));
    }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
    GUMIAndSongsDiv1 ___test;
    ___test.run_test(-1);
    return 0;
}
// END CUT HERE
