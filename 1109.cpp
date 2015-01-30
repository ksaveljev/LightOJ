#include <iostream>
#include <cmath>
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

int number_of_divisors(int n) {
    int result = 0;

    REPI (i, 1, n / 2) {
        if (n % i == 0) {
            result++;
        }
    }

    return result;
}

bool theTruthIsOutThere(const pair<int,int> &a, const pair<int,int> &b) {
    if (a.second == b.second) {
        return a.first > b.first;
    } else {
        return a.second < b.second;
    }
}

int main(void) {
    int number_of_cases, n;
    vector< pair<int,int> > numbers;

    REPI (i, 1, 1000) {
        numbers.push_back(make_pair(i, number_of_divisors(i)));
    }

    sort (numbers.begin(), numbers.end(), theTruthIsOutThere);

    cin >> number_of_cases;

    REPI (case_number, 1, number_of_cases) {
        cin >> n;
        cout << "Case " << case_number << ": " << numbers[n-1].first << endl;
    }

    return 0;
}
