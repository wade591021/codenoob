#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    if (!(cin >> T)) return 0;

    while (T--) {
        int M, N, Q;
        cin >> M >> N >> Q;
        cout << M << " " << N << " " << Q << "\n";

        char grid[105][105];
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                cin >> grid[i][j];
            }
        }

        while (Q--) {
            int r, c;
            cin >> r >> c;

            char target = grid[r][c];
            int radius = 0;
            
            while (true) {
                int nr = radius + 1;
                bool ok = true;

                if (r - nr < 0 || r + nr >= M || c - nr < 0 || c + nr >= N) {
                    ok = false;
                } else {
                    for (int i = r - nr; i <= r + nr; i++) {
                        for (int j = c - nr; j <= c + nr; j++) {
                            if (grid[i][j] != target) {
                                ok = false;
                                break;
                            }
                        }
                        if (!ok) break;
                    }
                }

                if (ok) radius++;
                else break;
            }
            cout << radius * 2 + 1 << "\n";
        }
    }
    return 0;
}