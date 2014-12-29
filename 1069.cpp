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
    int number_of_cases, pos, lift, result;

    cin >> number_of_cases;

    REPI (case_number, 1, number_of_cases) {
        cin >> pos >> lift;

        result = 0;

        // wait for lift
        result += abs(lift - pos) * 4;

        // open doors
        result += 3;

        // enter
        result += 5;

        // close doors
        result += 3;

        // go to ground floor
        result += pos * 4;

        // open doors
        result += 3;

        // exit
        result += 5;

        cout << "Case " << case_number << ": " << result << endl;
    }

    return 0;
}
