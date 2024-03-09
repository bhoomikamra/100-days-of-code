#include <iostream>
using namespace std;

int maxSubArraySum(int arr[], int n) {
    int maxEndingHere = arr[0];
    int maxSoFar = arr[0];

    for (int i = 1; i < n; ++i) {
        maxEndingHere = max(arr[i], maxEndingHere + arr[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }

    return maxSoFar;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum subarray sum: " << maxSubArraySum(arr, n) << endl;
    return 0;
}
