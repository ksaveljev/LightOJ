#include <iostream>
#include <cmath>
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

int main(void) {
    int number_of_cases;
    int col, row;
    unsigned long long s, tmp, diff;

    cin >> number_of_cases;

    REPI (case_number, 1, number_of_cases) {
        col = row = 0;

        cin >> s;

        tmp = sqrt(s);

        if (tmp * tmp == s) {
            if (isEven(s)) {
                col = tmp;
                row = 1;
            } else {
                col = 1;
                row = tmp;
            }
        } else {
            diff = s - tmp * tmp;

            if (diff <= tmp + 1) {
                if (isEven(tmp * tmp)) {
                    col = tmp + 1;
                    row = diff;
                } else {
                    row = tmp + 1;
                    col = diff;
                }
            } else {
                if (isEven(tmp * tmp)) {
                    row = tmp + 1;
                    col = 2 * (tmp + 1) - diff;
                } else {
                    col = tmp + 1;
                    row = 2 * (tmp + 1) - diff;
                }
            }
        }

        cout << "Case " << case_number << ": " << col << " " << row << endl;
    }

    return 0;
}
