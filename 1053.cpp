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

int main(void) {
    int number_of_cases, a, b, c;

    cin >> number_of_cases;

    REPI (case_number, 1, number_of_cases) {
        cin >> a >> b >> c;

        if (a > c) swap(a, c);
        if (b > c) swap(b, c);

        cout << "Case " << case_number << ": " << (c*c == a*a + b*b ? "yes" : "no") << endl;
    }

    return 0;
}
