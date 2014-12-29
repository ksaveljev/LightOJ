#include <iostream>
#include <queue>
#include <map>
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

char kingdom[21][21];

int reachable_cells(int h, int w, pair<int,int> start) {
    map< pair<int,int>, bool > visited;
    queue< pair<int,int> > q;
    pair<int,int> tmp;

    int result = 0;

    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        start = q.front();
        q.pop();

        result++;

        if (start.first > 0) {
            tmp = make_pair(start.first-1, start.second);
            if (!visited[tmp] && kingdom[tmp.first][tmp.second] == '.') {
                visited[tmp] = true;
                q.push(tmp);
            }
        }

        if (start.first + 1 < h) {
            tmp = make_pair(start.first+1, start.second);
            if (!visited[tmp] && kingdom[tmp.first][tmp.second] == '.') {
                visited[tmp] = true;
                q.push(tmp);
            }
        }

        if (start.second > 0) {
            tmp = make_pair(start.first, start.second-1);
            if (!visited[tmp] && kingdom[tmp.first][tmp.second] == '.') {
                visited[tmp] = true;
                q.push(tmp);
            }
        }

        if (start.second + 1 < w) {
            tmp = make_pair(start.first, start.second+1);
            if (!visited[tmp] && kingdom[tmp.first][tmp.second] == '.') {
                visited[tmp] = true;
                q.push(tmp);
            }
        }
    }

    return result;
}

int main(void) {
    int number_of_cases;
    int w, h;
    pair<int,int> start;

    cin >> number_of_cases;

    REPI (case_number, 1, number_of_cases) {
        cin >> w >> h;

        rep (i, h) {
            rep (j, w) {
                cin >> kingdom[i][j];
                if (kingdom[i][j] == '@') {
                    start = make_pair(i, j);
                }
            }
        }

        cout << "Case " << case_number << ": " << reachable_cells(h, w, start) << endl;
    }

    return 0;
}
