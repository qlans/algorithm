// BEGIN CUT HERE

// END CUT HERE
#line 5 "GooseTattarrattatDiv1.cpp"
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

#define REP(i,n) for(i=0;i<(n);++i)
#define FOR(i,l,h) for(i=(l);i<=(h);++i)
#define FORD(i,h,l) for(i=(h);i>=(l);--i)

typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<double> VD;
typedef long long LL;
typedef pair<int,int> PII;


class GooseTattarrattatDiv1
{
private:
    bool use[55];
    int length;
    string s, set;
public:
    int getmin(string S)
    {
        s = S;
        length = S.length();
        memset(use, 0x00, sizeof(use));
        int ans = 0;
        for (int i = 0; i < length; i++) {
            if (!use[i]) {
                set = "";
                dfs(i);
                ans += getAns();
            }
        }
        return ans;
    }
private:
    void dfs(int idx) {
        for (int i = 0; i < length; i++) {
            if (!use[i]) {
                if (s[i] == s[idx] || i == length - idx - 1) {
                    set.push_back(s[i]);
                    use[i] = true;
                    dfs(i);
                }
            }
        }
    }
    int getAns() {
        int n = set.length(), m = 0;
        for (int i = 0; i < n; i++) {
            m = max(m, countNum(set[i]));
        }
        return n - m;
    }
    int countNum(char x) {
        int num = 0;
        for (int i = 0; i < set.length(); i++) {
            if (set[i] == x) {
                num++;
            }
        }
        return num;
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
        string Arg0 = "geese";
        int Arg1 = 2;
        verify_case(0, Arg1, getmin(Arg0));
    }
    void test_case_1()
    {
        string Arg0 = "tattarrattat";
        int Arg1 = 0;
        verify_case(1, Arg1, getmin(Arg0));
    }
    void test_case_2()
    {
        string Arg0 = "xyyzzzxxx";
        int Arg1 = 2;
        verify_case(2, Arg1, getmin(Arg0));
    }
    void test_case_3()
    {
        string Arg0 = "xrepayuyubctwtykrauccnquqfuqvccuaakylwlcjuyhyammag";
        //reverse(Arg0.begin(), Arg0.end());
        //cout << Arg0 << endl;
        int Arg1 = 11;
        verify_case(3, Arg1, getmin(Arg0));
    }
    void test_case_4()
    {
        string Arg0 = "abaabb";
        int Arg1 = 3;
        verify_case(4, Arg1, getmin(Arg0));
    }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
    GooseTattarrattatDiv1 ___test;
    ___test.run_test(-1);
    return 0;
}
// END CUT HERE
