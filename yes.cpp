#include <bits/stdc++.h>
using namespace std;
int main() {
    int H, W, A, B;
    cin >> H >> W >> A >> B;
    vector<string> g(H, string(W, '0'));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if ((i < B) ^ (j < A)) g[i][j] = '1';
        }
    }
    for (int i = 0; i < H; i++) {
        int z = count(g[i].begin(), g[i].end(), '0');
        int o = W - z;
        if (min(z, o) != A) {
            cout << "No" << endl;
            return 0;
        }
    }
    for (int j = 0; j < W; j++) {
        int z = 0;
        for (int i = 0; i < H; i++) if (g[i][j] == '0') z++;
        int o = H - z;
        if (min(z, o) != B) {
            cout << "No" << endl;
            return 0;
        }
    }
    for (auto &s : g) cout << s << endl;
    return 0;
}
