#include <iostream>
using namespace std;

int maxSubArraySum(int arr[], int n) {
    // Your code here
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum subarray sum: " << maxSubArraySum(arr, n) << endl;
    return 0;
}
