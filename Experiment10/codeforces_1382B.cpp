#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];

        int k = 0;

        for(int i = 0; i < n; i++) {
            if(a[i] == 1) k++;
            else break;
        }

        if(k == n) {
            if(k % 2 == 1) cout << "First\n";
            else cout << "Second\n";
        } else {
            if(k % 2 == 0) cout << "First\n";
            else cout << "Second\n";
        }
    }

    return 0;
}
