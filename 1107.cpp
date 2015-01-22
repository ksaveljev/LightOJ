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
    int number_of_cases, x1, y1, x2, y2, number_of_cows, x, y;

    cin >> number_of_cases;

    REPI (case_number, 1, number_of_cases) {
        cin >> x1 >> y1 >> x2 >> y2 >> number_of_cows;

        cout << "Case " << case_number << ":" << endl;

        while (number_of_cows--) {
            cin >> x >> y;

            if (x >= x1 && x <= x2 && y >= y1 && y <= y2) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}
