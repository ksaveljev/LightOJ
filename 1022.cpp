#include <iostream>
#include <cmath>
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
    int number_of_cases;
    double r;
    double eps = 0.0000000001;
    double pi = 2 * acos(0.0);

    cin >> number_of_cases;

    REPI (case_number, 1, number_of_cases) {
        cin >> r;

        double result = 4 * r * r - pi * r * r + eps;
        printf("Case %d: %.2f\n", case_number, result);
    }

    return 0;
}
