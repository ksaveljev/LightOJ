#include <iostream>
#include <cstdio>
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
    int number_of_cases, m, n, result;

    scanf("%d", &number_of_cases);

    REPI (case_number, 1, number_of_cases) {
        result = 0;

        scanf("%d %d", &m, &n);

        if (n < m) swap(n, m);

        if (m == 1) {
            result = n;
        } else if (m == 2) {
            result = 2 + ((n - 2) / 4) * 2;
            int diff = n - (2 + ((n - 2) / 4) * 4);
            diff = diff == 3 ? 1 : 0;
            result += diff;
            result *= 2;
        } else {
            rep (i, m) {
                if (isEven(i)) {
                    result += 1 + (n - 1) / 2;
                } else {
                    result += n / 2;
                }
            }
        }

        printf("Case %d: %d\n", case_number, result);
    }

    return 0;
}
