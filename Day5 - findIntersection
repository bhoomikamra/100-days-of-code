#include <iostream>
#include <unordered_set>
using namespace std;

void findIntersection(int arr1[], int m, int arr2[], int n) {
    unordered_set<int> set1(arr1, arr1 + m);
    unordered_set<int> result;

    for (int i = 0; i < n; ++i) {
        if (set1.count(arr2[i])) {
            result.insert(arr2[i]);
        }
    }
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 2, 1};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {2, 2};
    int n = sizeof(arr2) / sizeof(arr2[0]);
    findIntersection(arr1, m, arr2, n);
    return 0;
}
