#include <bits/stdc++.h>
using namespace std;

struct fs {
    int x, y;
};

bool Less(const fs& p, const fs& q) {
    return p.x * q.y < p.y * q.x;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    freopen("SFRAC.INP","r",stdin);
	freopen("SFRAC.OUT","w",stdout);
    int n;
    cin >> n;
    vector<fs> a;
    a.push_back({1, 1});
    for (int i = 0; i < a.size(); ++i) {
        int x = a[i].x, y = a[i].y;
        int z = x + y;
        if (z <= n) {
            a.push_back({x, z});
            a.push_back({z, y});
        }
    }
    sort(a.begin(), a.end(), Less);
    for (int i = 0; i < a.size(); ++i) {
        cout << a[i].x << ' ' << a[i].y << '\n';
    }
    return 0;
}
