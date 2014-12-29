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
    int number_of_cases, n;
    int *fn = new int[10001];

    cin >> number_of_cases;

    REPI (i, 1, number_of_cases) {
        repi (j, 5) {
            cin >> fn[j];
            fn[j] %= 10000007;
        }

        cin >> n;

        REPI (j, 6, n) {
            fn[j] = 0;

            REPI (k, 1, 6) {
                fn[j] += fn[j - k];
                fn[j] %= 10000007;
            }
        }

        cout << "Case " << i << ": " << fn[n] << endl;
    }

    delete [] fn;

    return 0;
}
