#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int,int>> edges(n-1);
    vector<int> deg(n+1, 0);

    for(int i = 0; i < n-1; i++) {
        cin >> edges[i].first >> edges[i].second;
        deg[edges[i].first]++;
        deg[edges[i].second]++;
    }

    int hub = -1;
    for(int i = 1; i <= n; i++) {
        if(deg[i] >= 3) {
            hub = i;
            break;
        }
    }

    vector<int> ans(n-1);
    int label = 0;

    if(hub == -1) {
        for(int i = 0; i < n-1; i++) {
            ans[i] = label++;
        }
    } else {
        for(int i = 0; i < n-1; i++) {
            if(edges[i].first == hub || edges[i].second == hub) {
                ans[i] = label++;
            }
        }
        for(int i = 0; i < n-1; i++) {
            if(!(edges[i].first == hub || edges[i].second == hub)) {
                ans[i] = label++;
            }
        }
    }

    for(int i = 0; i < n-1; i++) {
        cout << ans[i] << "\n";
    }

    return 0;
}
