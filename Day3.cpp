#include <iostream>
using namespace std;

void rotateArray(int arr[], int n, int k) {
    k = k % n;
    reverse(arr, arr + n);
    reverse(arr, arr + k);
    reverse(arr + k, arr + n);

    // Display the rotated array
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    rotateArray(arr, n, k);
    return 0;
}
