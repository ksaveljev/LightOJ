#include <iostream>
#include <algorithm>
#include <vector>
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
    int input;

    cin >> number_of_cases;

    REPI (case_number, 1, number_of_cases) {
        cin >> input;

        vector<int> binary;

        while (input > 0) {
            if (isEven(input % 2)) {
                binary.push_back(0);
            } else {
                binary.push_back(1);
            }

            input /= 2;
        }

        binary.push_back(0);

        reverse(binary.begin(), binary.end());

        next_permutation(binary.begin(), binary.end());

        unsigned long long result = 0;

        reverse (binary.begin(), binary.end());

        rep (i, sz(binary)) {
            if (binary[i] == 1) {
                result += 1 << i;
            }
        }

        cout << "Case " << case_number << ": " << result << endl;
    }

    return 0;
}
