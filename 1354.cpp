#include <iostream>
using namespace std;

#define pow2(i) (1<<i)
#define bit(i) (1<<i)
#define isOdd(i) (i&1)
#define isEven(i) (!(i&1))
#define sz(i) i.size()
#define REP(i, b, n) for (int i = b; i < n; i++)
#define REPI(i, b, n) for (int i = b; i <= n; i++)
#define rep(i, n) REP(i, 0, n)
#define repi(i, n) REPI(i, 0, n)

int get_binary() {
    char num[8];
    int result = 0;

    rep (i, 8) {
        cin >> num[7-i];
    }

    rep (i, 8) {
        if (num[i] == '1') {
            result += pow2(i);
        }
    }

    return result;
}

int main(void) {
    int number_of_cases, a, b, c, d, other_a, other_b, other_c, other_d;
    char tmp;

    cin >> number_of_cases;

    REPI (case_number, 1, number_of_cases) {
        cin >> a >> tmp >> b >> tmp >> c >> tmp >> d;

        other_a = get_binary();
        cin >> tmp;
        other_b = get_binary();
        cin >> tmp;
        other_c = get_binary();
        cin >> tmp;
        other_d = get_binary();

        if (other_a == a && other_b == b && other_c == c && other_d == d) {
            cout << "Case " << case_number << ": Yes" << endl;
        } else {
            cout << "Case " << case_number << ": No" << endl;
        }
    }

    return 0;
}
