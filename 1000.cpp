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
    int number_of_cases, a, b;

    cin >> number_of_cases;

    REPI (i, 1, number_of_cases) {
        cin >> a >> b;
        cout << "Case " << i << ": " << a + b << endl;
    }
    return 0;
}
