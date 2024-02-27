#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> transposeMatrix(vector<vector<int>>& matrix) {
    vector<vector<int>> result(matrix[0].size(), vector<int>(matrix.size(), 0));
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            result[j][i] = matrix[i][j];
        }
    }
    return result;
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> transposed = transposeMatrix(matrix);
    for (const auto& row : transposed) {
        for (const int& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
    return 0;
}
