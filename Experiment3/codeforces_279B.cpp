#include <iostream>
using namespace std;

int main() {
    int n;
    long long t;
    cin >> n >> t;

    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int left = 0, maxBooks = 0;
    long long sum = 0;

    for(int right = 0; right < n; right++) {
        sum += a[right];

        while(sum > t) {
            sum -= a[left];
            left++;
        }

        maxBooks = max(maxBooks, right - left + 1);
    }

    cout << maxBooks;

    return 0;
}
