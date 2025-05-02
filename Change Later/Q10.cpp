#include <iostream>
#include <deque>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    deque<int> minq, maxq;
    long long res = LLONG_MIN;

    for (int i = 0; i < n; i++) {
        if (!minq.empty() && minq.front() <= i - k) minq.pop_front();
        if (!maxq.empty() && maxq.front() <= i - k) maxq.pop_front();

        while (!minq.empty() && arr[minq.back()] >= arr[i]) minq.pop_back();
        minq.push_back(i);

        while (!maxq.empty() && arr[maxq.back()] <= arr[i]) maxq.pop_back();
        maxq.push_back(i);

        if (i >= k - 1) {
            long long minc = arr[minq.front()];
            long long maxc = arr[maxq.front()];
            res = max(res, minc * maxc);
        }
    }

    cout << res;
    return 0;
}
